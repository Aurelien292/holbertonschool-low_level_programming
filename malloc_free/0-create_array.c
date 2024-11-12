#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - crée un tableau de caractères initialisé avec un
 * caractère spécifique
 * @size: la taille du tableau à créer
 * @c: le caractère avec lequel initialiser chaque élément du tableau
 *
 * Return: Un pointeur vers le tableau alloué et initialisé, ou
 * NULL en cas d'échec
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i;
if (size == 0)
return (NULL);
s = malloc(size);
if (s == 0)
return (NULL);
for (i = 0; i < size; i++)
{
s[i] = c;
}
return (s);
}
