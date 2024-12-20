#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_dlistint - Prints all the elements of a list_t list
 * @h: Pointer to the head of the list
 *
 * Description: This function traverses a double linked list,
 * prints the length and the content of each node.
 *
 * Return: The number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
{
printf("%d\n", h->n);
}
count++;
h = h->next;
}
return (count);
}
