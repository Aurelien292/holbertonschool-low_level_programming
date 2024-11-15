#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - Crée une nouvelle structure `dog_t` et l'initialise avec les
 *           informations fournies (nom, âge, propriétaire). Alloue
 * dynamiquement
 *           de la mémoire pour chaque champ de la structure.
 *           Si l'allocation échoue à n'importe quelle étape, la mémoire
 * déjà
 *           allouée est libérée et la fonction retourne NULL.
 *
 * @name: Le nom du chien. Il peut être une chaîne de caractères valide.
 * @age: L'âge du chien sous forme de nombre à virgule flottante.
 * @owner: Le nom du propriétaire du chien. Il peut être une
 * chaîne de caractères
 *         valide.
 *
 * Return: Un pointeur vers la structure `dog_t` nouvellement allouée et
 *         initialisée. Retourne NULL en cas d'échec de l'allocation
 * mémoire
 *         pour la structure ou l'un de ses champs.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p_dog;
int i, lname, lowner;
p_dog = malloc(sizeof(*p_dog));
if (p_dog == NULL || !(name) || !(owner))
{
free(p_dog);
return (NULL);
}
for (lname = 0; name[lname]; lname++)
;
for (lowner = 0; owner[lowner]; lowner++)
;
p_dog->name = malloc(lname + 1);
p_dog->owner = malloc(lowner + 1);
if (!(p_dog->name) || !(p_dog->owner))
{
free(p_dog->owner);
free(p_dog->name);
free(p_dog);
return (NULL);
}
for (i = 0; i < lname; i++)
p_dog->name[i] = name[i];
p_dog->name[i] = '\0';
p_dog->age = age;
for (i = 0; i < lowner; i++)
p_dog->owner[i] = owner[i];
p_dog->owner[i] = '\0';
return (p_dog);
}
