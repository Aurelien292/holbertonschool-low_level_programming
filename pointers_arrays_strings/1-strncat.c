#include "main.h"

/**
 * _strncat - Concatène n caractères d'une chaîne source
 *  à une chaîne destination.
 *
 * @dest: Pointeur vers la chaîne de destination, qui doit avoir suffisamment
 *        d'espace pour contenir la chaîne résultante.
 * @src: Pointeur vers la chaîne source à concaténer à la fin de dest.
 * @n: Le nombre maximum de caractères à concaténer depuis src.
 *
 * Description:
 * La fonction parcourt la chaîne dest jusqu'à atteindre
 * le caractère nul
 * ('\0'), puis elle copie jusqu'à n caractères de la chaîne
 * src à la fin de
 * dest. La chaîne résultante est ensuite terminée par un caractère nul.
 *
 * Return: Un pointeur vers la chaîne de destination (dest).
 */
char *_strncat(char *dest, char *src, int n)
{
int index = 0;
int Long_dest = 0;
while (dest[Long_dest] != '\0')
{
Long_dest++;
}
for (; src[index] != '\0' && (index + Long_dest) < (n + Long_dest) ; index++)
{
dest[Long_dest + index] = src[index];
}
dest[Long_dest + index] = '\0';
return (dest);
}
