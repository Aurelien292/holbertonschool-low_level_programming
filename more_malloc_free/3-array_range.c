#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - crée un tableau d'entiers contenant les valeurs
 * entre min et max.
 * @min: l'entier de début de la plage.
 * @max: l'entier de fin de la plage.
 *
 * Return: retourne un pointeur vers le tableau nouvellement créé.
 *         Si min > max, retourne NULL.
 *         Si l'allocation de mémoire échoue, retourne NULL.
 */

int *array_range(int min, int max)
{
int i;
int size = max - min + 1;
int *array;
if (min > max)
{
return (NULL);
}
array = (int *)malloc(size * sizeof(int));
if (array == NULL)
{
return (NULL);
}
for (i = 0; i < size ; i++)
{
array[i] = min + i;
}
return (array);
}
