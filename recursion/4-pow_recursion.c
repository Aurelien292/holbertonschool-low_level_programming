#include "main.h"

/**
 * _pow_recursion - Calcule la valeur de x élevé à la puissance y.
 * @x: le chiffre .
 * @y: la puissance.
 *
 * Description: La fonction calcule x puissance y. Si y est inférieur à 0,
 * elle retourne -1.
 * Si y est égal à 0, elle retourne 1 (car x^0 = 1).
 * Si y est supérieur à 0, la fonction appelle elle-même la fonction
 * pour multiplier x.
 * Return: Le résultat de x^y, ou -1 si y est inférieur à 0.
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
