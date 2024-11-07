#include "main.h"

/**
 * factorial - Calcule la factorielle d'un nombre donné
 * @n: Le nombre pour lequel on calcule la factorielle
 * Return: La factorielle du nombre, ou -1 si n est négatif
 */
int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0 || n == 1)
{
return (1);
}
return (n * factorial(n - 1));
}