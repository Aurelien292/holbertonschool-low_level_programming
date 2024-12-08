#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"
/**
 * copy_file - Copie le contenu d'un fichier source vers un fichier de
 * destination.
 * @src_file: Le fichier source à lire.
 * @dest_file: Le fichier de destination où les données seront écrites.
 *
 * Ouvre le fichier source en lecture seule, le fichier de destination
 * en écriture seule
 * (en le créant si nécessaire et en le tronquant), puis copie les
 * données du fichier source
 * vers le fichier de destination par blocs de taille BUF_SIZE. Si
 * des erreurs se produisent
 * à n'importe quelle étape, le programme affiche un message d'erreur
 * et termine avec un
 * code d'erreur approprié.
 * main - Fonction principale du programme.
 * @argc: Le nombre d'arguments passés au programme.
 * @argv: Le tableau des arguments passés au programme.
 *
 * Vérifie que le nombre d'arguments est correct. Si ce n'est pas
 * le cas, affiche un
 * message d'erreur et termine avec le code 97. Sinon, appelle la
 * fonction copy_file
 * pour copier le contenu du fichier source vers le fichier de
 * destination.
 *
 * Retourne 0 si tout se passe bien.
 **/
void copy_file(const char *src_file, const char *dest_file)
{
int fd_to;
int fd_from;
char buffer[BUF_SIZE];
ssize_t bytes_read;
ssize_t bytes_written;
fd_from = open(src_file, O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
exit(98);
}
fd_to = open(dest_file, O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (fd_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", dest_file);
printf("erreur creation");
close(fd_from);
exit(99);
}
while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
{
bytes_written = write(fd_to, buffer, bytes_read);
if (bytes_written != bytes_read)
{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", dest_file);
		printf("erreur d'ecriture");
		close(fd_from);
		close(fd_to);
		exit(99);
}
}
if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src_file);
close(fd_from);
close(fd_to);
exit(98);
}
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
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
copy_file(argv[1], argv[2]);
return (0);
}
