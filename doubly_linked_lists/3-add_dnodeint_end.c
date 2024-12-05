#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_dnodeint_end - Ajoute un nouveau nœud à la fin d'une liste
 * doublement chaînée
 * @head: Un pointeur vers le pointeur de la tête de la liste
 * @n: L'entier à stocker dans le nouveau nœud
 *
 * Return: L'adresse du nouveau nœud, ou NULL si l'allocation échoue
 *
 * Description: Cette fonction alloue de la mémoire pour un nouveau nœud,
 *              l'initialise avec la valeur donnée (n), puis l'ajoute à
 * la fin de la liste doublement chaînée. Si la liste est vide, le
 *              nouveau nœud devient la tête de la liste.
 *              Si l'allocation échoue, la fonction retourne NULL.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node;
dlistint_t *temp;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
new_node->prev = NULL;
if (*head == NULL)
{
*head = new_node;
return (new_node);
}
temp = *head;
while (temp->next != NULL)
temp = temp->next;
temp->next = new_node;
new_node->prev = temp;
return (new_node);
}
