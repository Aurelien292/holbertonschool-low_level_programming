#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: Double pointer to the head of the list
 * @str: String to be added to the new node
 *
 * Return: Address of the new element, or NULL if it failed
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
