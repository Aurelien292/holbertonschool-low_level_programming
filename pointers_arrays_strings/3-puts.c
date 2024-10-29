#include "main.h"

/**
 * _puts - Imprime une chaîne de caractères suivie d'un saut de ligne.
 * @str: Pointeur vers la chaîne de caractères à imprimer.
 *
 * Description: Cette fonction parcourt la chaîne de caractères
 * et l'affiche sur la sortie standard, suivie d'un saut de ligne.
 */
void _puts(char *str)
{
(while *str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
