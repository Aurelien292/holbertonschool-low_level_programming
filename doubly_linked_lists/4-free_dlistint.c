#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - Libère une liste doublement chaînée de type dlistint_t
 * @head: Pointeur vers la tête de la liste
 *
 * Description: Cette fonction libère la mémoire allouée pour chaque nœud
 *              de la liste doublement chaînée, ainsi que les nœuds
 *  précédents et suivants de chaque élément. Elle s'assure que
 * toute la mémoire est libérée correctement pour éviter
 * les fuites de mémoire.
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp);
}
}
