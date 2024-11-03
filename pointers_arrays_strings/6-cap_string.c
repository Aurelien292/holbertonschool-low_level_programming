#include "main.h"

/**
 * cap_string - Met en majuscule tous les mots d'une chaîne
 * suivant separateur.
 * @str: La chaîne à modifier.
 *
 * Return: Un pointeur vers la chaîne modifiée.
 */
char *cap_string(char *str)
{
int i = 0;
char Separateur[] = ",;.!?\"(){} \t\n";
int j;
int is_separateur;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
i++;
while (str[i] != '\0')
{
is_separateur = 0;
for (j = 0; Separateur[j] != '\0'; j++)
{
if (str[i] == Separateur[j])
{
is_separateur = 1;
break;
}
}
if (is_separateur)
{
i++;
if (str[i] >= 'a' && str[i] <= 'z')
{
str[i] -= 32;
}
}
else
{
i++;
}
}
return (str);
}
