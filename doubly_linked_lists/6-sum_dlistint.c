#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Calcule la somme de toutes les données (n) dans une liste
 *doublement chaînée
 * @head: Pointeur vers la tête de la liste doublement chaînée
 *
 * Return: La somme des données (n) de tous les nœuds, ou 0 si la liste
 * est vide
 *
 * Description: Cette fonction parcourt toute la liste doublement chaînée
 * et additionne les valeurs de chaque nœud. Si la liste est vide, elle
 * retourne 0.
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
dlistint_t *temp = head;
while (temp != NULL)
{
sum += temp->n;
temp = temp->next;
}
return (sum);
}

