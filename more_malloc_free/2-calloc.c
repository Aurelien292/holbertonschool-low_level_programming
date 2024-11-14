#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - Alloue de la mémoire pour un tableau de `nmemb` éléments de
 *           `size` octets chacun, et initialise toute la mémoire à zéro.
 * @nmemb: Le nombre d'éléments à allouer.
 * @size: La taille de chaque élément en octets.
 *
 * Return: Un pointeur vers la mémoire allouée et initialisée
 * à zéro, ou NULL si l'allocation échoue ou si `nmemb` ou `size`
 * est égal à 0.
 *
 * Description:
 * La fonction alloue de la mémoire pour un tableau de `nmemb` éléments de
 * `size` octets chacun, puis initialise cette mémoire à zéro. Si l'un des
 * paramètres `nmemb` ou `size` est égal à zéro, ou si l'allocation
 * échoue,la fonction renvoie NULL.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
unsigned int i;
if (nmemb == 0 || size == 0)
{
return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0; i < nmemb * size ; i++)
((char *)ptr)[i] = 0;
return (ptr);
}
