#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire et gère les erreurs
 * @b: taille en octets de la mémoire à allouer
 *
 * Retourne un pointeur vers la mémoire allouée si l'allocation réussit.
 * Si l'allocation échoue, termine le programme avec le code d'état 98.
 *
 * Return: pointeur vers la mémoire allouée en cas de succès,
 *         sinon le programme termine avec exit(98).
 */
void *malloc_checked(unsigned int b)
{
void *ptr = malloc(b);
if (ptr == NULL)
{
exit(98);
}
return (ptr);
}
