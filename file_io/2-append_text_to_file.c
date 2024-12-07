#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdio.h>


/**
 * append_text_to_file - Ajoute du texte à la fin d'un fichier.
 * @filename: Le nom du fichier dans lequel ajouter du texte.
 * @text_content: Le texte à ajouter au fichier.
 *
 * Return: 1 en cas de succès, -1 en cas d'échec.
 */

int append_text_to_file(const char *filename, char *text_content)

{
int fd;
ssize_t bytes_written;
size_t len = 0;

if (filename == NULL)
return (-1);

if (text_content == NULL)
return (1);

fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (fd == -1)
	return (-1);

}

while (text_content[len])
len++;
bytes_written = write(fd, text_content, len);
if (bytes_written == -1)

{
close(fd);
return (-1);
}

close(fd);
return (1);
}
