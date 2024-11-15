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
d->name = malloc(strlen(name) + 1);
if (d->name == NULL)
{
free(d);
return (NULL);
}
strcpy(d->name, name);
d->age = age;
d->owner = malloc(strlen(owner) + 1);
if (d->owner == NULL)
{
free(d->name);
free(d);
return (NULL);
}
strcpy(d->owner, owner);
return (d);
}
