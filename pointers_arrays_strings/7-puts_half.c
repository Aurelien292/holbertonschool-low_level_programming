#include "main.h"
/**
 * puts_half - Affiche la seconde moitié d'une chaîne.
 * @str: Pointeur vers la chaîne de caractères à afficher.
 */
void puts_half(char *str)
{
int Debut;
int Long = 0;
int i;
while (str[Long] != '\0')
{
Long++;
}
Debut = Long / 2;
if (Long % 2 != 0)
{
Debut++;
}
for (i = Debut; i < Long; i++)
{
_putchar(str[i]);
}
