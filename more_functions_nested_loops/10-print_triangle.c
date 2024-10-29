#include "main.h"

/**
 * print_triangle - Affiche un triangle de # de la taille spécifiée.
 * @size: La hauteur du triangle.
 *
 * Description: Cette fonction imprime un triangle de caractères '#'
 * avec une hauteur spécifiée par le paramètre size. Si size est
 * inférieur ou égal à 0, un saut de ligne est imprimé.
 */
void print_triangle(int size);
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
for (i = 1; i <= size ; i++)
{
for (j = 1; j <= size - i ; j++)
{
_putchar(' ');
}
for (j = 1; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
