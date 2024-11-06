#include "main.h"
/**
 * _sqrt_recursion_helper - Fonction récursive pour calculer la racine carrée.
 * @n: Le nombre pour lequel on veut calculer la racine carrée.
 * @r: L'itérateur courant (possible racine carrée).
 *
 * Description:
 * Cette fonction est une fonction auxiliaire récursive qui teste successivement
 * les valeurs de `r` (qui commence à 1) et vérifie si le carré de `r` est égal
 * à `n`. Si c'est le cas, la fonction retourne `r` comme racine carrée de `n`.
 * Si le carré de `r` dépasse `n`, la fonction retourne -1 pour indiquer qu'il
 * n'y a pas de racine carrée entière pour `n`.
 *
 * @param n: Le nombre dont on veut calculer la racine carrée.
 * @param r: L'itérateur actuel, qui commence à 1.
 *
 * @return: La racine carrée de `n` si elle existe, sinon -1.
 */
int _sqrt_recursion(int n)
{
int r;
if (r * r == n)
{
return (r);
}
if (r * r > n || r * r < 1)
{
return (-1);
}
_sqrt_recursion(n, r + 1);
}
