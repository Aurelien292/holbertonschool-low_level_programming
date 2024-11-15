#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Affiche les informations d'un chien.
 * @d: Pointeur vers la structure dog dont les informations doivent
 * être affichées.
 * Description: Cette fonction affiche les informations relatives à un chien
 * en vérifiant si les champs de la structure sont valides. Si un champ est
 * `NULL`, elle affiche `(nil)` à la place. Si le chien n'est pas `NULL`,
 * elle affiche le nom, l'âge et le propriétaire du chien.
 */
void print_dog(struct dog *d)
{
if (d == NULL)
{
printf("\n");
}
if (d->name == NULL)
{
printf("Name: (nil)");
}
if (d->owner == NULL)
{
printf("(nil)");
}
else
{
printf("Name: %s\n", d->name);
printf("Age: %f\n", d->age);
printf("Owner: %s\n", d->owner);
}
}
