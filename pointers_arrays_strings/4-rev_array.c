#include "main.h"

/**
 * reverse_array - Inverse le contenu d'un tableau d'entiers
 * @a: Pointeur vers le tableau d'entiers
 * @n: Nombre d'éléments dans le tableau
 *
 * Retourne: Rien. Modifie le tableau en place.
 */

void reverse_array(int *a, int n)
{
int i;
int tmp;
for (i = 0; i < n / 2; i++)
{
int tmp = a[i];
a[i] = a[n - 1 - i];
a[n - 1 - i] = tmp;
}
}
