#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - Insère un nouveau nœud à une position
 * spécifique dans une liste doublement chaînée.
 * @h: Un pointeur vers le pointeur de la tête de la liste.
 * @idx: L'index où le nouveau nœud doit être inséré. L'index
 * commence à 0.
 * @n: La valeur à stocker dans le nouveau nœud.
 * Return: L'adresse du nouveau nœud inséré, ou NULL si
 * l'insertion a échoué.
 *
 * Description:
 * Cette fonction insère un nouveau nœud dans une liste doublement chaînée
 * à un index spécifié. Le nouveau nœud aura la valeur `n`, et la liste
 * sera mise à jour pour maintenir sa structure doublement chaînée. Si
 * l'insertion est réussie, la fonction retourne l'adresse du nouveau nœud.
 *
 * Si l'index est invalide (supérieur à la longueur de la liste) ou si
 * l'allocation mémoire pour le nouveau nœud échoue, la fonction retourne
 * NULL.
 * Si le nœud est inséré au début (index 0), la tête de la liste est
 * mise à jour.
 * Si le nœud est inséré au milieu ou à la fin de la liste, les pointeurs
 * `prev` et `next` des nœuds voisins sont ajustés en conséquence.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node;
dlistint_t *temp = *h;
unsigned int i;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (idx == 0)
{
new_node->next = *h;
if (*h)
(*h)->prev = new_node;
*h = new_node;
return (new_node);
}
for (i = 0; temp && i < idx - 1; i++)
temp = temp->next;
if (temp == NULL)
{
free(new_node);
return (NULL);
}
new_node->next = temp->next;
new_node->prev = temp;
if (temp->next)
temp->next->prev = new_node;
temp->next = new_node;
return (new_node);
}
