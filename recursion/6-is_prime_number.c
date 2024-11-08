#include <stdio.h>
#include "main.h"


/**
 * is_prime_number - Fonction qui vérifie si un nombre est premier.
 * @n: Le nombre à tester.
 *
 * Return: 1 si le nombre est premier, sinon 0.
 *
 * Description:
 * Cette fonction prend un entier `n` et vérifie s'il est premier.
 * Un nombre est premier s'il n'a pas de diviseur autre que 1 et
 * lui-même. Si `n` est inférieur ou égal à 1, ou divisible par
 * un nombre entre 2 et la racine carrée de `n`, la fonction
 * retourne 0 (le nombre n'est pas premier). Sinon, elle retourne 1
 * (le nombre est premier).
 * La vérification est effectuée en testant les diviseurs possibles
 * de 2 jusqu'à la
 * racine carrée de `n` (en utilisant `j * j <= n`).
 */
int is_prime_number(int n)
{
int j;
if (n <= 1)
{
return (0);
}
if (n == 2 || n == 3)
{
return (1);
}
for (j = 2 ; j * j <= n; j++)
{
if (n % j == 0)
{
return (0);
}
}
return (1);
}
