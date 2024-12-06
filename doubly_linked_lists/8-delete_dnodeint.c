#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - Supprime le nœud à un index spécifié
 * dans une liste doublement chaînée.
 *
 * @head: Un pointeur vers le pointeur de la tête de la liste.
 * @index: L'index du nœud à supprimer. L'index commence à 0.
 *
 * Return: 1 si la suppression a réussi, -1 si elle a échoué.
 *
 * Description:
 * Cette fonction supprime un nœud à une position spécifique dans
 * une liste doublement chaînée.
 * Si l'index spécifié est valide, le nœud à cet index est
 * supprimé et la mémoire est libérée.
 * Les pointeurs des nœuds voisins sont mis à jour pour maintenir
 *  la validité de la liste.
 *
 * Si l'index est invalide (plus grand que la taille de la liste)
 *  ou si la liste est vide,
 * la fonction retourne -1. Si l'opération réussit, elle retourne 1.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)

{
dlistint_t *temp = *head;
unsigned int i;

if (*head == NULL)
return (-1);

if (index == 0)
{
	*head = temp->next;
	if (*head)
	(*head)->prev = NULL;
	free(temp);
	return (1);
}

for (i = 0; temp != NULL && i < index; i++)
temp = temp->next;

if (temp == NULL)
return (-1);

if (temp->next != NULL)
temp->next->prev = temp->prev;
if (temp->prev != NULL)
temp->prev->next = temp->next;
free(temp);
return (1);
}
