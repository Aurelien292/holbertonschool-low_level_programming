#include "main.h"

/**
 * _strncpy - Copie jusqu'à n caractères d'une chaîne source vers une
 * chaîne destination.
 *
 * @dest: Pointeur vers la chaîne de destination qui recevra la copie.
 * @src: Pointeur vers la chaîne source à copier.
 * @n: Le nombre maximum de caractères à copier depuis src.
 *
 * Description:
 * La fonction copie jusqu'à n caractères de la chaîne source (src) dans
 * la chaîne de destination (dest). Si la longueur de src est
 * inférieure à n,
 * le reste de dest sera rempli avec des caractères nuls ('\0').
 * Cette fonction ne garantit pas que dest est terminée par un
 * caractère nul
 * si n est supérieur à la longueur de src.
 *
 * Return: Un pointeur vers la chaîne de destination (dest).
 */

char *_strncpy(char *dest, char *src, int n)
{
int index = 0;
for (; index < n && src[index] != '\0'; index++)
{
dest[index] = src[index];
}
for (; index < n; index++)
{
dest[index] = '\0';
}
return (dest);
}
