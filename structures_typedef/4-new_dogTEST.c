#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Crée une nouvelle structure dog avec des informations.
 * @name: Le nom du chien.
 * @age: L'âge du chien.
 * @owner: Le nom du propriétaire du chien.
 *
 * Return: Un pointeur vers la structure dog nouvellement
 * allouée, ou NULL en cas d'échec.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *doggy;
if (name == NULL || owner == NULL)
{
return (NULL);
}
doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
{
return (NULL);
}
doggy->name = malloc(strlen(name) + 1);
if (doggy->name == NULL)
{
free(doggy);
return (NULL);
}
doggy->owner = malloc(strlen(owner) + 1);
if (doggy->owner == NULL)
{
free(doggy->name);
free(doggy);
return (NULL);
}
strcpy(doggy->name, name);
strcpy(doggy->owner, owner);
doggy->age = age;
return (doggy);
}