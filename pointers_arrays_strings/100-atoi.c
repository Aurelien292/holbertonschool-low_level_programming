#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _atoi - Convertit une chaîne de caractères en entier.
 * @s: La chaîne de caractères à convertir.
 *
 * Return: L'entier converti, ou 0 si aucun chiffre n'est trouvé.
 */
int _atoi(char *s)
{
int sign = 1;
int nb = 0;
while (*s)
{
if (*s == '-')
{
sign *= -1;
}
else if (*s == '+')
{
}
else if (isdigit(*s))
{
nb = _atoi(s);
nb *= sign;
printf("%d\n", nb);
break;
}
s++;
}
return (0);
}
