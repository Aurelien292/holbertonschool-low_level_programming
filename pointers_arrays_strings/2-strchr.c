#include "main.h"
#include <stddef.h>

/**
 * _strchr - Cherche le premier caractère c dans la chaîne s.
 * @s: La chaîne de caractères à parcourir.
 * @c: Le caractère à rechercher dans la chaîne s.
 * Description: Cette fonction recherche la première occurrence du
 * caractère c
 * dans la chaîne s. Si c'est trouvé, elle renvoie un pointeur vers cet
 * endroit
 * dans la chaîne. Si le caractère n'est pas trouvé, elle retourne NULL.
 *
 * Return: Un pointeur vers la première occurrence de c dans s, ou NULL
 *         si c n'est pas trouvé.
 */

char *_strchr(char *s, char c)
{
unsigned int index = 0;
for (index = 0 ; s[index] != '\0' ; index++)
{
if (s[index] == c)
{
return (s + index);
}
}
return (NULL);
}
