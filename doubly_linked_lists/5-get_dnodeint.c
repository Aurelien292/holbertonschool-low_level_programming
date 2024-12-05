#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Récupère le nœud à un index spécifique dans
 * la liste.
 * @head: Pointeur vers la tête de la liste doublement chaînée.
 * @index: L'index du nœud à récupérer, en commençant par 0.
 *
 * Return: L'adresse du nœud à l'index donné, ou NULL si l'index est
 * hors limite.
 *
 * Description: Cette fonction parcourt la liste jusqu'à atteindre l'index
 *              demandé et retourne le nœud à cet index. Si l'index est
 *              hors des limites de la liste, la fonction retourne NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;
dlistint_t *temp = head;

while (temp != NULL)

{
if (i == index)
return (temp);
temp = temp->next;
i++;
}
return (NULL);
}
