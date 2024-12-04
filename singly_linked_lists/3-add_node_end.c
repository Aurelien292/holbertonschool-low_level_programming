#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Ajoute un nouveau nœud à la fin d'une liste_t.
 * @head: Un pointeur vers le pointeur de la tête de la liste.
 * @str: La chaîne de caractères à ajouter dans le nouveau nœud.
 *
 * Description: Cette fonction crée un nouveau nœud avec la chaîne `str`,
 * duplique la chaîne et ajoute le nouveau nœud à la fin de la liste.
 * Si l'allocation de mémoire échoue, la fonction retourne NULL.
 *
 * Return: L'adresse du nouvel élément, ou NULL si l'ajout échoue.
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *temp;
new_node = malloc(sizeof(*new_node));
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
new_node->next = NULL;
if (*head == NULL)
{
*head = new_node;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
}
return (new_node);
}
