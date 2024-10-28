#include "main.h"

/**
 * _isupper - Vérifie si un caractère est une majuscule.
 * @c: Le caractère à vérifier (de type int, représentant le code ASCII).
 *
 * Return: 1 si c est une majuscule (A-Z), 0 sinon.
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
else
{
return (0);
}
}
