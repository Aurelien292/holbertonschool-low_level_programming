#include "main.h"

/**
 * _memcpy - copie n octets de la mémoire de src vers dest.
 * @dest: Le pointeur vers la zone mémoire de destination.
 * @src: Le pointeur vers la zone mémoire source.
 * @n: Le nombre d'octets à copier.
 *
 * Description: Cette fonction copie les n premiers octets de la zone mémoire
 * pointée par src vers la zone mémoire pointée par dest.
 * Elle renvoie un pointeur vers la zone mémoire de destination (dest).
 *
 * Return: Retourne le pointeur vers la zone mémoire de destination (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;
for (index = 0 ; index < n ; index++)
dest[index] = src[index];
return (dest);
}
