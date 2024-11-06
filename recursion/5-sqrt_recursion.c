#include "main.h"

/**
 * _sqrt_recursion - Calcule la racine carrée naturelle d'un nombre.
 * @n: Le nombre dont on veut calculer la racine carrée.
 *
 * Cette fonction utilise la récursion pour tester successivement les
 * entiers à partir de 1 pour vérifier si leur carré est égal à `n`.
 * Si le carré de `r` est égal à `n`, alors `r` est la racine carrée
 * naturelle.
 * Si le carré de `r` dépasse `n`, la fonction retourne -1.
 *
 * Return: La racine carrée naturelle de `n` si elle existe, sinon -1.
 */
int _sqrt_recursion(int n)
{
return (_sqrt_helper(n, 1));
}
/**
 * _sqrt_helper - Fonction récursive pour tester successivement les entiers.
 * @n: Le nombre dont on cherche la racine carrée.
 * @r: L'entier courant qu'on teste.
 *
 * Cette fonction est une fonction auxiliaire qui teste si le carré de `r`
 * est égal à `n`. Si oui, elle retourne `r` comme racine carrée naturelle.
 * Si le carré de `r` dépasse `n`, la fonction retourne -1.
 * Return: La racine carrée de `n` si elle existe, sinon -1.
 */
int _sqrt_helper(int n, int r)
{
if (r * r == n)
{
return (r);
}
if (r * r > n)
{
return (-1);
}
return (_sqrt_helper(n, r + 1));
}
