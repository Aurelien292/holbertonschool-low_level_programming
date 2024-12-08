#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * open_file - Ouvre un fichier en lecture ou en écriture
 * @filename: Le nom du fichier à ouvrir
 * @flags: Les flags d'ouverture
 * @mode: Le mode de création (pour O_CREAT)
 * Return: Le descripteur de fichier
 */
int open_file(const char *filename, int flags, mode_t mode)
{
int fd = open(filename, flags, mode);

if (fd == -1)
{
	if (flags & O_RDONLY)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	else
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(flags & O_RDONLY ? 98 : 99);
}
return (fd);
}

/**
 * copy_data - Copie les données d'un fichier à l'autre
 * @fd_from: Le descripteur du fichier source
 * @fd_to: Le descripteur du fichier de destination
 * @src_file: Le nom du fichier source
 * @dest_file: Le nom du fichier de destination
 */
void copy_data(int fd_from, int fd_to, const char *src_file,
const char *dest_file)
{
char buffer[BUFFER_SIZE];
ssize_t bytes_read, bytes_written;

while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
	bytes_written = write(fd_to, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest_file);
		exit(99);
	}
}
if (bytes_read == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
	exit(98);
}
}

/**
 * close_files - Ferme les descripteurs de fichiers
 * @fd_from: Le descripteur du fichier source
 * @fd_to: Le descripteur du fichier de destination
 */
void close_files(int fd_from, int fd_to)
{
if (close(fd_from) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
if (close(fd_to) == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
}

/**
 * main - Point d'entrée du programme
 * @argc: Nombre d'arguments
 * @argv: Tableau des arguments
 * Return: 0 en cas de succès
 */
int main(int argc, char *argv[])
{
int fd_from, fd_to;

if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

fd_from = open_file(argv[1], O_RDONLY, 0);
fd_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

copy_data(fd_from, fd_to, argv[1], argv[2]);
close_files(fd_from, fd_to);

return (0);
}
