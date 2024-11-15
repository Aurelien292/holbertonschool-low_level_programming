#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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
    dog_t *d; 

    
    d = malloc(sizeof(dog_t)); 
    if (d == NULL) 
    {
        return (NULL);
    }

    
    if (name != NULL)
    {
        d->name = malloc(strlen(name) + 1); 
        if (d->name == NULL)  
        {
            free(d);  
            return (NULL);
        }
        strcpy(d->name, name); 
    }
    else
    {
        d->name = NULL;  
    }

    
    if (owner != NULL)
    {
        d->owner = malloc(strlen(owner) + 1); 
        if (d->owner == NULL)  
        {
            free(d->name);  
            free(d);  
            return (NULL);
        }
        strcpy(d->owner, owner);  
    }
    else
    {
        d->owner = NULL; 
    }

   
    d->age = age;

    return (d); 
}
