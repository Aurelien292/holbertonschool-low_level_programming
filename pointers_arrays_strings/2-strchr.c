#include "main.h"
#include <stddef.h>

/**
 * _strchr - Localise un caractère dans une chaîne.
 * @s: Un pointeur vers la chaîne à rechercher.
 * @c: Le caractère à localiser dans la chaîne.
 *
 * Cette fonction recherche la première occurrence du caractère
 * c dans la chaîne pointée par s. Si le caractère est trouvé, 
 * elle retourne un pointeur vers ce caractère dans la chaîne. 
 * Si le caractère n'est pas trouvé, elle retourne NULL.
 *
 * Retourne: Un pointeur vers la première occurrence du caractère c,
 *           ou NULL si c n'est pas trouvé dans la chaîne.
 */

char *_strchr(char *s, char c)
{
unsigned int index = 0;
for ( index = 0 ; s[index] != '\0' ; index++)
{
if (s[index] == c)
{
return (s + index);
}
}
return (NULL);
}



