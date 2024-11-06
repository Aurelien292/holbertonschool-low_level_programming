#include "main.h"

/**
 * _strlen_recursion - Calcule la longueur d'une chaîne de caractères
 * @s: Pointeur vers la chaîne de caractères
 * Return: La longueur de la chaîne
 */
int _strlen_recursion(char *s)
{
int compteur = 0;
if (*s)
{
compteur++;
compteur += _strlen_recursion(s + 1);
}
return (compteur);
}
