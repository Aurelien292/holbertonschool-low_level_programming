#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>

#define BUFFER_SIZE 1024

/**
 * error_exit - Affiche un message d'erreur et quitte le programme
 * @code: Le code de sortie du programme
 * @message: Le message d'erreur à afficher
 * @arg: L'argument à insérer dans le message d'erreur
 *
 * Description: Cette fonction affiche un message d'erreur sur la sortie
 * d'erreur standard (STDERR) en utilisant dprintf, puis termine le programme
 * avec le code de sortie spécifié.
 */
void error_exit(int code, const char *message, const char *arg)
{
dprintf(STDERR_FILENO, message, arg);
exit(code);
}

/**
 * open_file - Ouvre un fichier en lecture ou en écriture
 * @filename: Le nom du fichier à ouvrir
 * @flags: Les flags d'ouverture
 * Return: Le descripteur de fichier
 */
int open_file(const char *filename, int flags)
{
int fd;
mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
if (flags & O_CREAT)
fd = open(filename, flags, mode);

else

fd = open(filename, flags);


if (fd == -1)
{
if (flags & O_RDONLY)
	error_exit(98, "Error: Can't read from file %s\n", filename);
else
	error_exit(99, "Error: Can't write to %s\n", filename);
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
if (bytes_written == -1 || bytes_written != bytes_read)
error_exit(99, "Error: Can't write to %s\n", dest_file);
}
if (bytes_read == -1)
{
error_exit(98, "Error: Can't read from file %s\n", src_file);
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

error_exit(97, "Usage: cp file_from file_to\n", "");


fd_from = open_file(argv[1], O_RDONLY);
fd_to = open_file(argv[2], O_CREAT | O_WRONLY | O_TRUNC);

copy_data(fd_from, fd_to, argv[1], argv[2]);
close_files(fd_from, fd_to);

return (0);
}
