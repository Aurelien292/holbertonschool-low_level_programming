#include "main.h"

/**
 * string_toupper - Change toutes les lettres minuscules d'une
 * chaîne en majuscules
 * @str: Pointeur vers la chaîne de caractères à modifier
 *
 * Return: Pointeur vers la chaîne modifiée
 */
char *string_toupper(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
i++;
}
return (str);
}
