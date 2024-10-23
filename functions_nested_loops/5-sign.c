#include "main.h"

/**
 * print_sign - fonction qui vérifie si un caractère est une lettre
 * @pos: le caractère à vérifier
 *
 * Return: retourne 1 si c'est une lettre, autrement retourne 0
 */

#include <stdio.h>
#include "main.h"

int print_sign(int pos)

{
if (pos > 0)
{
_putchar("+");
return (1);
}
else if (pos == 0)
{
_putchar("0");
return (0);
}
else
{
_putchar("-");
return (-1);
}
}
