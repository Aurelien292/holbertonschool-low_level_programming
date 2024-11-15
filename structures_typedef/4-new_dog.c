#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - Crée une nouvelle structure `dog_t` et l'initialise avec les
 *           informations fournies (nom, âge, propriétaire).
 *           Alloue dynamiquement de la mémoire pour chaque champ de la
 *           structure.
 *           Si l'allocation échoue pour l'une des étapes, libère la
 *           mémoire
 *           déjà allouée et retourne NULL.
 * @name: Le nom du chien. Il peut être une chaîne de caractères valide.
 * @age: L'âge du chien sous forme de nombre à virgule flottante.
 * @owner: Le nom du propriétaire du chien. Il peut être une
 * chaîne de caractères
 *         valide.
 *
 * Return: Un pointeur vers la structure `dog_t` nouvellement
 *         allouée et
 *         initialisée. Retourne NULL en cas d'échec de
 *         l'allocation mémoire
 *         pour la structure ou l'un de ses champs.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int nlen, olen, i;
dog_t *doggy;
nlen = olen = 0;
while (name[nlen++])
;
while (owner[olen++])
;
doggy = malloc(sizeof(dog_t));
if (doggy == NULL)
return (NULL);
doggy->name = malloc(nlen *sizeof(doggy->name));
if (doggy == NULL)
return (NULL);
for (i = 0; i < nlen; i++)
doggy->name[i] = name[i];
doggy->age = age;
doggy->owner = malloc(olen * sizeof(doggy->owner));
if (doggy == NULL)
return (NULL);
for (i = 0; i < olen; i++)
doggy->owner[i] = owner[i];
return (doggy);
}
