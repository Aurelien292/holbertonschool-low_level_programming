#include "main.h"

/**
 * print_square - Affiche un carré de caractères '#'.
 * @size: La taille du côté du carré.
 *
 * Description: Cette fonction imprime un carré de caractères '#'
 * de dimensions size x size. Si size est moins ou égal à 0,
 * un saut de ligne est affiché.
 */
void print_square(int size)
{
int i, j;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0 ; i < size ; i++)
{
for (j = 0 ; j < size ; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
