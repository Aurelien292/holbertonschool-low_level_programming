#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * open_src_file - Ouvre le fichier source en lecture seule.
 * @src_file: Le fichier source à ouvrir.
 *
 * Retourne le descripteur de fichier source ou termine le programme avec une erreur.
 */
int open_src_file(const char *src_file)
{
int fd_from = open(src_file, O_RDONLY);
if (fd_from == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
	exit(98);
}
return (fd_from);
}
/**
 * open_dest_file - Ouvre le fichier de destination en écriture, le crée si
 * nécessaire, et le tronque.
 * @dest_file: Le fichier de destination à ouvrir.
 *
 * Retourne le descripteur de fichier de destination ou termine le programme avec une erreur.
 */
int open_dest_file(const char *dest_file)
{
int fd_to = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", dest_file);
	exit(99);
}
return (fd_to);
}
/**
 * close_files - Ferme les descripteurs de fichiers ouverts.
 * @fd_from: Le descripteur de fichier source.
 * @fd_to: Le descripteur de fichier de destination.
 *
 * Si la fermeture échoue, le programme se termine avec une erreur.
 */
void close_files(int fd_from, int fd_to)
{
if (close(fd_from) == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
	exit(100);
}
if (close(fd_to) == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
	exit(100);
}
}

/**
 * copy_data - Copie les données du fichier source vers le fichier de destination.
 * @fd_from: Le descripteur du fichier source.
 * @fd_to: Le descripteur du fichier de destination.
 *
 * Lit les données du fichier source et les écrit dans le fichier de destination
 * par blocs de taille BUF_SIZE. Si une erreur se produit lors de la lecture ou de l'écriture,
 * le programme se termine avec une erreur.
 */
void copy_data(int fd_from, int fd_to)
{
char buffer[BUF_SIZE];
ssize_t bytes_read;
ssize_t bytes_written;

while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", "destination");
		close_files(fd_from, fd_to);
		exit(99);
	}
}

if (bytes_read == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", "source");
	close_files(fd_from, fd_to);
	exit(98);
}
}