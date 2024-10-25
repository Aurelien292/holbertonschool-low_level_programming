#include <stdio.h>
#include "main.h"

/**
 * calcule - Ecrit les nombres de (0-99) to stdout
 * tableau - creer un tableau
 * main - fonction pour ecrire le tableau
 * @n: Le nombre a ecrire
 * Description: Si le nombre est plus grand que 10 ,imprime un chiffre
 * sinon deux chiffres
 */
void print_times_table(int n)
{
if (n < 10)
{
_putchar('0' + n);
}
else
{
_putchar('0' + (n / 10));
_putchar('0' + (n % 10));
}
}
void tableau(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
print_times_table(i * j);
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('$');
_putchar('\n');
}
}
int main(void)
{
tableau();
return (0);
}
