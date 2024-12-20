#include "main.h"
/**
 * rev_string - Inverse une chaîne de caractères et l'affiche.
 * @s: Pointeur vers la chaîne de caractères à inverser.
 *
 * Description: Cette fonction inverse la chaîne donnée en
 * permutant les caractères de la première moitié de la chaîne
 * avec ceux de la seconde moitié, puis affiche la chaîne inversée.
 */
void rev_string(char *s)
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
}
