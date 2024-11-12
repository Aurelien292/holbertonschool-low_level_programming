#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Fonction qui retourne un pointeur vers un espace mémoire
 * nouvellement alloué contenant une copie de la chaîne de caractères
 * donnée en paramètre.
 *
 * @str: Un pointeur vers la chaîne de caractères à dupliquer.
 * Return: Un pointeur vers la chaîne dupliquée en cas de succès,
 * ou NULL si :
 * - str est NULL, ou
 * - l'allocation mémoire échoue.
 * Description :
 * Cette fonction duplique la chaîne de caractères passée en paramètre
 * en suivant ces étapes :
 * 1. Vérifie si la chaîne d'entrée est NULL. Si c'est le cas, la
 * fonction retourne NULL.
 * 2. Calcule la longueur de la chaîne d'entrée.
 * 3. Alloue suffisamment de mémoire pour contenir la chaîne dupliquée,
 * y compris
 *    un espace pour le caractère nul de fin (`\0`).
 * 4. Copie chaque caractère de la chaîne d'entrée dans la nouvelle mémoire
 * allouée.
 * 5. Ajoute un caractère nul (`\0`) à la fin de la nouvelle chaîne
 * pour marquer sa fin.
 */
char *_strdup(char *str)
{
char *duplicate;
int i, len = 0;
if (str == NULL)
return (NULL);
for (i = 0; str[i]; i++)
len++;
duplicate = malloc(sizeof(char) * (len + 1));
if (duplicate == NULL)
return (NULL);
for (i = 0; str[i]; i++)
duplicate[i] = str[i];
duplicate[len] = '\0';
return (duplicate);
}
