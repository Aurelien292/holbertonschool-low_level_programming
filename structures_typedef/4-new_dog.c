#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - Crée une nouvelle structure dog avec des informations.
 * @name: Le nom du chien.
 * @age: L'âge du chien.
 * @owner: Le nom du propriétaire du chien.
 *
 * Return: Un pointeur vers la structure dog nouvellement allouée,
 *         ou NULL en cas d'échec de l'allocation mémoire.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
struct dog *d;
d = malloc(sizeof(struct dog));
if (d == NULL)
return (NULL);
d->name = name;
d->age = age;
d->owner = owner;
return (d);
}
