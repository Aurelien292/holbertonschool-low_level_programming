#include <stdio.h>
#include "dog.h"


/**
 * init_dog - Initialise une structure dog avec des valeurs.
 * @d: Pointeur vers la structure dog à initialiser.
 * @name: Pointeur vers une chaîne de caractères représentant
 * le nom du chien.
 * @age: L'âge du chien (de type float).
 * @owner: Pointeur vers une chaîne de caractères représentant
 * le nom du propriétaire du chien.
 *
 * Description: Cette fonction initialise les membres d'une structure
 * `dog` avec
 * les valeurs fournies. Elle permet de remplir les champs
 * `name`, `age`, et `owner`
 * d'une instance de la structure `dog`.
 */


void init_dog(struct dog *d, char *name, float age, char *owner)

{
d->name = name;
d->age = age;
d->owner = owner;
}
