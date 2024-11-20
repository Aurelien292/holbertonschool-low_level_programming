#include <stdio.h>
#include "variadic_functions.h"

/**
 * sum_them_all - retourne la somme de tous ses paramètres
 * @n: le nombre d'arguments passés à la fonction
 *
 * Return: la somme de tous les arguments, ou 0 si n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
int sum = 0;
unsigned int i;
va_list args;
if (n == 0)
{
return (0);
}
va_start(args, n);
for (i = 0; i < n ; i++)
{
sum = sum + va_arg(args, int);
}
va_end(args);
return (sum);
}
