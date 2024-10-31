#include "main.h"

/**
 * print_array - Imprime les éléments d'un tableau
 * @a: Pointeur vers le tableau
 * @n: Nombre d'éléments dans le tableau
 */

void print_array(int *a, int n)
{
int j; 
for (j = 0; j < n; j++)
{
printf("%d", a[j]);
if (j < n - 1)
{
printf(",");
}
}
printf("\n");
}
