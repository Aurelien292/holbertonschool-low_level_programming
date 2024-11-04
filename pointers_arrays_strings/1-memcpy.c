#include "main.h"

/**
 * _memcpy - Copie une zone de mémoire d'une source vers une destination.
 * @dest: Pointeur vers la zone de mémoire de destination.
 * @src: Pointeur vers la zone de mémoire source à copier.
 * @n: Nombre d'octets à copier.
 * Cette fonction copie n octets de la zone de mémoire pointée par src
 * vers la zone de mémoire pointée par dest. Si dest et src se chevauchent,
 * le comportement de la fonction est indéfini.
 * Retourne: Un pointeur vers la zone de mémoire de destination (dest).
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int index;
for (index = 0 ; index < n ; index++)
dest[index] = src[index];
return (dest);
}
  
