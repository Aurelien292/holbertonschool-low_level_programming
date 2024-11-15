#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Libère la mémoire allouée pour un chien.
 * @d: Le pointeur vers la structure `dog_t` à libérer.
 *
 * Cette fonction libère d'abord la mémoire allouée pour les champs `name`
 * et `owner`, puis elle libère la structure elle-même.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}

