#include "main.h"

/**
 * print_rev - Inverse une chaîne de caractères.
 * @s: Pointeur vers la chaîne à inverser.
 *
 * Cette fonction prend une chaîne de caractères en entrée,
 * inverse son contenu et l'affiche.
 */
void print_rev(char *s)
{
char temp;
int compteur = 0;
int i;
while (s[compteur] != '\0')
{
compteur++;
}
for (i = 0 ; i < compteur / 2; i++)
{
temp = s[i];
s[i] = s[compteur - 1 - i];
s[compteur - 1 - i] = temp;
}
for (i = 0; i < compteur; i++)
putchar (s[i]);
}
