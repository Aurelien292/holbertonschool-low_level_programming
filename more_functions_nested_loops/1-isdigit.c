#include "main.h"

/**
 * _isdigit - Vérifie si un chiffre es entre 0 et 9.
 * @c: Le caractère à vérifier (de type int).
 *
 * Return: 1 si c est compris entre 0 et 9 , 0 sinon.
 */

int _isdigit(int c)
{
if (c >= 0 && c <= 9)
{
return (1);
}
else
{
return (0);
}
}
