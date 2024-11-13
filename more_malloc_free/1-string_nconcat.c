#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatène les deux chaînes `s1` et `s2`
 * jusqu'à `n` caractères de `s2`.
 * @s1: La première chaîne de caractères.
 * @s2: La deuxième chaîne de caractères.
 * @n: Le nombre maximum de caractères à concaténer à partir de `s2`.
 *
 * Return: Un pointeur vers la nouvelle chaîne concaténée. Si
 * l'allocation échoue, la fonction retourne NULL.
 *
 * Description:
 * Cette fonction alloue de la mémoire pour une nouvelle chaîne
 * qui est la concaténation
 * de la chaîne `s1` suivie des premiers `n` caractères de la
 * chaîne `s2`. Si `n` est
 * supérieur à la longueur de `s2`, toute la chaîne `s2` est
 * utilisée. La nouvelle chaîne
 * résultante est terminée par un caractère nul `\0`.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int long1 = 0;
unsigned int long2 = 0;
unsigned int i;
char *resultat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[long1] != '\0')
{
long1++;
}
while (s2[long2] != '\0')
{
long2++;
}
if (n > long2)
{
n = long2;
}
resultat = (char *)malloc(sizeof(char) * (long1 + n + 1));
if (resultat == NULL)
{
return (NULL);
}
for (i = 0; i < long1; i++)
{
resultat[i] = s1[i];
}
for (i = 0; i < n; i++)
{
resultat[long1 + i] = s2[i];
}
resultat[long1 + n] = '\0';
return (resultat);
}
