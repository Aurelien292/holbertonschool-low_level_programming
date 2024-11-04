#include "main.h"

/**
 * _strpbrk - Localise la première occurrence dans la chaîne s de
 *            n'importe quel caractère dans la chaîne accept.
 *
 * @s: La chaîne à rechercher.
 * @accept: La chaîne contenant les caractères à correspondre.
 *
 * Return: Un pointeur vers le caractère dans s qui correspond à
 *         l'un des caractères dans accept, ou NULL si aucun caractère
 *         correspondant n'est trouvé.
 */
char *_strpbrk(char *s, char *accept);
{
int index;
while (*s != '\0')
{
for (index = 0 ; accept[index]; index++)
{
if (*s == accept[index])
{
return (s);
}
}
s++;
}
return ('\0');
}
