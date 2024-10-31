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
int i = 0;
while(*s == ' ')
{
s++;
}
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
nb = nb * 10 + (s[i] - '0'); 
break;
}
i++;
s++;
}
return (nb);
}


