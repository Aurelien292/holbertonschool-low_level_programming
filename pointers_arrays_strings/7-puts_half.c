#include "main.h"
/**
 * puts_half - Affiche la seconde moitié d'une chaîne.
 * @str: Pointeur vers la chaîne de caractères à afficher.
 */
void puts_half(char *str);
{
int Long = 0;
while(str[Long] != '\0')
{
Long++;
}
int debut = Long / 2 ;
if (Long != 0)
{
Debut++;
}
for (int i = Debut; i < Long; i++)
{
_putchar(str[i]);
}
