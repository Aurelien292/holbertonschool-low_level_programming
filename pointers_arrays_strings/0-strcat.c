#include "main.h"

/**
 * _strcat - Concatène deux chaînes de caractères.
 *
 * @dest: Pointeur vers la chaîne de destination, qui doit avoir suffisamment
 *        d'espace pour contenir la chaîne résultante.
 * @src: Pointeur vers la chaîne source à concaténer à la fin de dest.
 *
 * Description:
 * La fonction parcourt la chaîne dest jusqu'à atteindre le caractère nul
 * ('\0'), puis elle copie tous les caractères de la chaîne src à la suite
 * de dest. Enfin, elle ajoute un caractère nul à la fin de la chaîne résultante.
 *
 * Return: Un pointeur vers la chaîne de destination (dest).
 */

char *_strcat(char *dest, char *src)

{
int index = 0;
int Long_dest = 0;

    while (dest[Long_dest] != '\0')
    {
        Long_dest++;
    }
    while (src[index] != '\0')

    {
        dest[Long_dest] = src[index];
        Long_dest++;
        index++;
    }
      dest[Long_dest] = '\0';
      return (dest);
}
