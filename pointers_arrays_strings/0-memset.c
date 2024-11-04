#include "main.h"

/**
 * _memset - Remplit une zone de mémoire avec un octet constant.
 * @s: Un pointeur vers la zone de mémoire à remplir.
 * @b: L'octet constant à utiliser pour le remplissage.
 * @n: Le nombre d'octets à remplir.
 * Cette fonction remplit les n premiers octets de la zone de mémoire
 * pointée par s avec l'octet constant b.
 * Elle retourne un pointeur vers la zone de mémoire remplie.
 * Return: Un pointeur vers la zone de mémoire s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int index;
for (index = 0 ; index < n ; index++)
{
s[index] = b;
}
return (s);
}
