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
int compteur = 0;
int j;
while (s[compteur] != '\0')
{
compteur++;
}
for (j = compteur - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
