#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * dlistint_len - Renvoie le nombre d'éléments dans une liste chaînée.
 * @h: Pointeur vers la tête de la liste.
 *
 * Description: Cette fonction parcourt la liste chaînée à partir de
 * la tête et compte le nombre de nœuds présents. Elle renvoie
 * le nombre de nœuds.
 *
 * Return: Le nombre de nœuds dans la liste.
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}
