#include "main.h"

/**
 * _isalpha - fonction qui vérifie si un caractère est une lettre
 * @Lettre: le caractère à vérifier
 *
 * Return: retourne 1 si c'est une lettre, autrement retourne 0
 */

int _isalpha(int Lettre)
{
if ((Lettre >= 'a' && Lettre <= 'z') || (Lettre >= 'A' && Lettre <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
