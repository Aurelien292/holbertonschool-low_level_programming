#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - Crée un tableau de caractères et l'initialise avec
 * un caractère spécifique.
 * @size: La taille du tableau à créer.
 * @c: Le caractère pour initialiser le tableau.
 * Return: Un pointeur vers le tableau créé, ou NULL si la taille est
 * 0 ou si l'allocation échoue.
 */

char *create_array(unsigned int size, char c)
{
char *tableau;
unsigned int i;
if (size == 0)
return (NULL);
tableau = malloc(sizeof(char) * size);
if (tableau == 0)
return (NULL);
for (i = 0; i < size; i++)
{
tableau[i] = c;
} 
return (tableau);
}
