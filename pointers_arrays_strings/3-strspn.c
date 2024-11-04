#include "main.h"

/**
 * _strspn - Calcule la longueur du segment initial de `s`
 * qui ne contient que des caractères de `accept`.
 *
 * @s: La chaîne à analyser.
 * @accept: La chaîne contenant les caractères acceptés.
 *
 * Return: Le nombre de caractères dans le segment initial
 *         de `s` qui sont dans `accept`.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int index = 0;
int compteur = 0;
int j;
while (s[index] != ' ')
{
for (j = 0 ; accept[j] != '\0' ; j++)
if (s[index] == accept[j])
{
compteur++;
break;
}
index++;
}
return (compteur);
}
