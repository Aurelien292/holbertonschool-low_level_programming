#include "main.h"

/**
 * print_number - Affiche un entier.
 * @n: L'entier à afficher.
 * Affiche chaque chiffre de l'entier. Si l'entier est
 * négatif elle affiche un signe moins avant les chiffres.
 */
void print_number(int n)
{
if (n < 0)
{
_putchar('-');
n = -n;
}
if (n / 10)
{
print_number(n / 10);
}
_putchar((n % 10) + '0');
}
