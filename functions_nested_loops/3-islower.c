#include "main.h"

/**
 * _islower - vérifie si un caractère est une minuscule
 * @Min: paramètre de verification
 *
 * Return: retourne 1 si c'est une minuscule, autrement retourne 0
 */

int _islower(int Min)
{
if (Min >= 97 && Min <= 122)
{
return (1);
}
else
{
return (0);
}
}
