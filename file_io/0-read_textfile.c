#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <stddef.h>
/**
 * read_textfile - Lit un fichier et l'affiche sur la sortie standard.
 * @filename: Le nom du fichier à lire.
 * @letters: Le nombre de caractères à lire et afficher.
 * 
 * Description:
 * Cette fonction ouvre un fichier en mode lecture, lit jusqu'à `letters`
 * caractères et les affiche sur la sortie standard (généralement la console).
 * Si une erreur survient à n'importe quelle étape (ouverture du fichier, 
 * lecture ou écriture), la fonction retourne 0. Sinon, elle retourne le 
 * nombre de caractères effectivement lus et écrits.
 *
 * Retour: Le nombre de caractères effectivement lus et écrits,
 *         ou 0 en cas d'erreur.
 */
ssize_t read_textfile(const char *filename, size_t letters)

{
/*int Descripteur_de_fichier = int fd;*/
int fd;
ssize_t bytes_read, bytes_written;
char *buffer;
if (filename == NULL)
{
return (0);
}
fd = open (filename, O_RDONLY);
if (fd == -1)
return (0);


buffer = malloc(letters);

if (buffer == NULL)
{
close(fd);
return (0);
}
bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}
bytes_written = write (STDOUT_FILENO, buffer, bytes_read);
if (bytes_written == -1 || bytes_written != bytes_read)
{
free(buffer);
close(fd);
return (0);
}
free(buffer);
close(fd);
return (bytes_read);
}