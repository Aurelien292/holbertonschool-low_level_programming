#include "main.h"

/**
 * _print_rev_recursion - Affiche une chaîne de caractères en ordre inverse
 * en utilisant la récursion.
 * @s: La chaîne à afficher.
 * Description: Cette fonction utilise la récursion pour parcourir la chaîne
 * de caractères jusqu'à la fin. Une fois que la fin est atteinte (le
 * caractère
 * nul `'\0'`), elle affiche les caractères dans l'ordre inverse, un par un,
 * en "déroulant" les appels récursifs.
 */
void _print_rev_recursion(char *s)
{
if (*s != '\0')
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}
