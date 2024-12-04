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

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node - Adds a new node at the beginning of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
char *dup_str;
unsigned int len = 0;
new_node = malloc(sizeof(list_t));
if (new_node == NULL)
return (NULL);
dup_str = strdup(str);
if (dup_str == NULL)
{
free(new_node);
return (NULL);
}
while (str[len])
len++;
new_node->str = dup_str;
new_node->len = len;
new_node->next = *head;
*head = new_node;
return (new_node);
}
