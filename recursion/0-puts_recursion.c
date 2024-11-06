#include "main.h"

/**
 * _puts_recursion - Affiche une chaîne de caractères suivie d'un
 * saut de ligne.
 * @s: La chaîne de caractères à afficher.
 *
 * Description: Cette fonction affiche une chaîne de caractères en utilisant
 * la récursion. Si la chaîne n'est pas vide, elle affiche
 * le premier caractère
 * et appelle récursivement la fonction avec le reste de la chaîne. Une fois
 * que tous les caractères ont été affichés, elle affiche un saut de ligne.
 *
 * Return: Rien. La fonction affiche directement la chaîne.
 */

void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar(*s);
_putchar(s + 1);
}
else
_putchar('\n');
}
