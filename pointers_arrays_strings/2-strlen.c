#include "main.h"

/**
 * _strlen - Renvoie la longueur d'une chaîne de caractères.
 * @s: Pointeur vers la chaîne de caractères.
 *
 * Description: Cette fonction parcourt la chaîne de caractères
 * et compte le nombre de caractères jusqu'à atteindre le caractère nul.
 *
 * Return: La longueur de la chaîne de caractères.
 */
int _strlen(char *s)
{
int compteur = 0;
while (s[compteur] != '\0')
{
compteur++;
}
return (compteur);
}
