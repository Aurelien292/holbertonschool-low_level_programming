#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Applique une fonction à chaque élément d'un tableau
 * @array: Tableau d'entiers sur lequel appliquer la fonction
 * @size: Taille du tableau
 * @action: Fonction à appliquer à chaque élément du tableau
 *
 * Description:
 * Cette fonction parcourt le tableau d'entiers `array` et applique la fonction
 * `action` à chaque élément du tableau. Si un des paramètres est
 * invalide (si
 * `array` est `NULL`, si `size` est inférieur ou égal à 0, ou si
 * `action` est `NULL`),
 * la fonction ne fait rien et retourne immédiatement.
 *
 * Retour:
 * Cette fonction ne retourne rien (void).
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
if (array == NULL || size <= 0 || action == NULL)
{
return;
}
for (i = 0 ; i < size ; i++)
{
action(array[i]);
}
}
