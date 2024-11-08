#include <stdio.h>
#include "main.h"

/**
 * is_divisible - Vérifie récursivement si un nombre est divisible
 * par un diviseur donné.
 * @num: Le nombre à tester.
 * @div: Le diviseur actuel à tester.
 *
 * Return: 0 si num est divisible par div, sinon 1 si num n'est pas divisible
 *         par div jusqu'à ce que div atteigne num / 2.
 *
 * Description:
 * Cette fonction vérifie récursivement si un nombre `num` est divisible
 * par un diviseur `div` qui commence à 2. La fonction continue
 * la vérification jusqu'à ce que le diviseur atteigne num / 2.
 * Si un diviseur est trouvé, la fonction retourne 0, indiquant que
 * le nombre n'est pas premier. Si aucun diviseur n'est trouvé,
 * la fonction retourne 1.
 */
int is_divisible(int num, int div);
int is_prime_number(int n);


int is_divisible(int num, int div)
{
if (num % div == 0)
return (0);
if (div == num / 2)
return (1);
return (is_divisible(num, div + 1));
}
/**
 * is_prime_number - Vérifie si un nombre est premier.
 * @n: Le nombre à tester.
 *
 * Return: 1 si le nombre est premier, sinon 0 si le nombre n'est pas premier.
 *
 * Description:
 * Cette fonction vérifie si un nombre `n` est premier en appelant
 * la fonction récursive `is_divisible`. Elle vérifie d'abord
 * si `n` est inférieur ou égal à 1, auquel cas il n'est pas premier.
 * Elle traite également les cas de 2 et 3 (qui sont premiers).
 * Ensuite, elle appelle `is_divisible` pour tester la divisibilité
 * de `n` par tous les entiers à partir de 2 jusqu'à num / 2.
 */
int is_prime_number(int n)
{
int div = 2;
if (n <= 1)
return (0);
if (n >= 2 && n <= 3)
return (1);
return (is_divisible(n, div));
}
