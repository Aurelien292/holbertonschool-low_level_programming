#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatène deux chaînes de caractères.
 * @s1: La première chaîne de caractères.
 * @s2: La deuxième chaîne de caractères.
 *
 * Description:
 * Cette fonction alloue de la mémoire et concatène les deux chaînes
 * s1 et s2.
 * Si l'un des arguments est `NULL`, il est traité comme une chaîne vide.
 * La mémoire allouée est suffisante pour contenir les deux chaînes et
 * un caractère de fin de chaîne.
 * Si l'allocation échoue, la fonction retourne `NULL`.
 *
 * Return:
 * Un pointeur vers la chaîne concaténée, ou `NULL` en cas d'échec
 * de l'allocation.
 */
char *str_concat(char *s1, char *s2)
{
int long1 = 0;
int long2 = 0;
int i;
int j;
char *resultat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[long1] != '\0')
long1++;
while (s2[long2] != '\0')
long2++;
resultat = (char *)malloc(sizeof(char) * (long1 + long2 + 1));
if (resultat == NULL)
return (NULL);
for (i = 0; i < long1; i++)
resultat[i] = s1[i];
for (j = 0; j < long2; j++)
resultat [i + j] = s2[j];
resultat [i + j] = '\0';
return (resultat);
}
