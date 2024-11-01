#include "main.h"

/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: Pointeur vers la première chaîne de caractères.
 * @s2: Pointeur vers la seconde chaîne de caractères.
 *
 * Cette fonction compare les chaînes s1 et s2 caractère par caractère.
 * Elle retourne un entier négatif si s1 est inférieure à s2,
 * zéro si elles sont égales, et un entier positif si s1 est
 * supérieure à s2.
 *
 * Return: La différence entre le premier caractère non identique de
 * s1 et s2, ou la différence de fin de chaîne si l'une des chaînes
 * est plus courte.
 */

int _strcmp(char *s1, char *s2)
{
int index = 0;
while (s1[index] != '\0' && s2[index] != '\0')
{
if (s1[index] != s2[index])
{
return (s1[index] - s2[index]);
}
index++;
}
return (s1[index] - s2[index]);
}
