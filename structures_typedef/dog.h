#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure pour stocker les informations sur un chien.
 * @name: Un pointeur vers une chaîne de caractères représentant
 * le nom du chien.
 * @age: Un nombre à virgule flottante représentant l'âge du chien.
 * @owner: Un pointeur vers une chaîne de caractères représentant
 * le nom du propriétaire du chien.
 *
 * Description: Cette structure est utilisée pour stocker les
 * informations de base d'un chien.
 * Elle inclut le nom du chien, son âge et le nom de son propriétaire.
 */
typedef struct dog
{
char *name;
float age;
char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
