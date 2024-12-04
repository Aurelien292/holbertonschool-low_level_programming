#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_list - Libère une liste chaînée de type list_t.
 * @head: Pointeur vers la tête de la liste.
 *
 * Description: Cette fonction libère la mémoire allouée pour chaque nœud
 * de la liste, ainsi que pour la chaîne de caractères `str` contenue dans
 * chaque nœud.
 */
void free_list(list_t *head)
{
list_t *temp;
while (head != NULL)
{
temp = head;
head = head->next;
free(temp->str);
free(temp);
}
}
