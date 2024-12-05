#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_dnodeint - Ajoute un nouveau nœud au début d'une liste dlistint_t
 * @head: Un pointeur vers le pointeur du premier nœud de la liste
 * @n: L'entier à stocker dans le nouveau nœud
 *
 * Return: L'adresse du nouveau nœud, ou NULL si l'allocation échoue
 *
 * Description: Cette fonction alloue de la mémoire pour un nouveau nœud,
 *              initialise le nœud avec la valeur donnée (n), puis l'insère
 *              au début de la liste doublement chaînée.
 *              Si l'allocation de mémoire échoue, la fonction retourne NULL.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;
if (*head != NULL)
(*head)->prev = new_node;
*head = new_node;
return (new_node);
}
