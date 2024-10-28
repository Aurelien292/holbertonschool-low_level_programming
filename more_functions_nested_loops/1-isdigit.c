#include "main.h"

/**
 * _isdigit - Vérifie si un chiffre est entre 0 et 9.
 * @c: Le caractère à vérifier (de type int).
 *
 * Return: 1 si c est compris entre 0 et 9 , 0 sinon.
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
}
