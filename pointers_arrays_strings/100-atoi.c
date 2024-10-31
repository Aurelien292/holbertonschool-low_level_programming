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
 unsigned int nb = 0;
 int i = 0;
 int stop = 0;
 while (s[i] != '\0')
   {
     if (s[i] == '-' && stop == 0)
       {
	 sign = -1;
       }
     else if (s[i] >= 48 && s[i] <= 57 && stop == 0)  
       {
	 nb = nb * 10 + (s[i] - '0'); 
       }
     else if (nb != 0 && (s[i] < 48 && s[i] > 57))
       {
	 sign = 1;
	 stop = 1;
     i++;
       }
   }
 nb *= sign;
 return (nb);
}
