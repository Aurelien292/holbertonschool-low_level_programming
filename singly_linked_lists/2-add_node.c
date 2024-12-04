#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node - Ajoute un nouveau nœud au début d'une liste_t.
 * @head: Un pointeur vers le pointeur de la tête de la liste.
 * @str: La chaîne de caractères à ajouter au nouveau nœud.
 *
 * Description: Cette fonction crée un nouveau nœud avec la chaîne `str`,
 * duplique la chaîne, puis ajoute ce nouveau nœud au début de la liste.
 * Si l'allocation mémoire échoue, la fonction renvoie NULL.
 *
 * Return: L'adresse du nouvel élément, ou NULL si l'opération échoue.
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
if (str == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;
return (new_node);
}
