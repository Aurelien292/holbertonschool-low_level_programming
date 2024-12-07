#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - Crée un fichier avec un contenu spécifique.
 * @filename: Le nom du fichier à créer.
 * @text_content: Le texte à écrire dans le fichier.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec.
 */
int create_file(const char *filename, char *text_content)

{
int fd;
ssize_t bytes_written;
size_t len = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
if (fd == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[len])
len++;

bytes_written = write(fd, text_content, len);
if (bytes_written == -1)
{
	close(fd);
	return (-1);
}
}
close(fd);
return (1);
}
