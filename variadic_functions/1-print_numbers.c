#include "variadic_functions.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_numbers - Affiche des nombres suivis d'un séparateur
 *                 et termine par un saut de ligne.
 * @separator: La chaîne de caractères à imprimer entre les nombres.
 * @n: Le nombre d'entiers à imprimer.
 * Description:
 * Cette fonction affiche les nombres passés en argument, séparés par le
 * séparateur spécifié. Si le séparateur est NULL, il ne sera pas affiché.
 * La fonction imprime les nombres suivis d'un saut de ligne.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
int Chiffres;
unsigned int i;
va_list args;
va_start(args, n);
for (i = 0; i < n; i++)
{
Chiffres = va_arg(args, int);
printf("%d", Chiffres);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
