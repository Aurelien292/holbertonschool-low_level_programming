#include "main.h"


/**
 * _strcmp - Compare deux chaînes de caractères.
 * @s1: Pointeur vers la première chaîne.
 * @s2: Pointeur vers la seconde chaîne.
 *
 * Cette fonction compare les chaînes de caractères s1 et s2.
 * Elle retourne un entier négatif si s1 est inférieure à s2,
 * zéro si elles sont égales, et un entier positif si s1 est
 * supérieure à s2.
 *
 * Return: La différence entre les longueurs de s1 et s2.
 */

int _strcmp(char *s1, char *s2);
{
int index = 0;
int Long_s1 = 0;
while (s1[Long_s1])
{
Long_s1++;
}
while (s2[index])
{
index++;
}
return (Long_s1 - index);
}
