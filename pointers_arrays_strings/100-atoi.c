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
int n = 0;
while (*s)
{
if (*s == '-')
{
sign *= -1;
}
else if (isdigit(*s))
{
nb = s[i];
nb *= sign;
printf("%d\n", nb);
break;
}
i++;
s++;
}
return (0);
}
