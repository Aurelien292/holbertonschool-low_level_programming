#include "main.h"

/**
 * cap_string - Met en majuscule tous les mots d'une chaîne.
 * @str: La chaîne à capitaliser.
 *
 * Return: Un pointeur vers la chaîne modifiée.
 */
char *cap_string(char *str)
{
int i = 0;
char Separateur[] = ",;.!?\"(){} \t\n";
int j;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
i++;
while (str[i] != '\0')
{
for (j = 0 ; Separateur[j] != '\0' ; j++)
{
if (str[i] == Separateur[j])
{
i++;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
break;
}
}
i++;
}
return (str);
}
