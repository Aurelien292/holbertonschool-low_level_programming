#include "main.h"

/**
 * puts2 - Affiche chaque deuxième caractère d'une chaîne.
 * @str: Pointeur vers la chaîne de caractères à afficher.
 *
 * Description: Cette fonction parcourt la chaîne donnée et
 * imprime chaque deuxième caractère, en commençant par le
 * premier, suivi d'un saut de ligne.
 */
void puts2(char *str)
{
  int i,j;
  for (i = 0; str[i] != '\0')
  {
    i++;
  }
 for (j = 0  j < i ; i += 2)

  {
_putchar(str[i]);
}
_putchar('\n');
}
