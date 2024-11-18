#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Affiche un nom en utilisant un pointeur de fonction
 * @name: Le nom à afficher
 * @f: Un pointeur vers une fonction qui prend un string en
 * paramètre et ne retourne rien
 * Description: Cette fonction prend un nom et un pointeur de fonction,
 * et si les deux sont valides (non-NULL), elle appelle la
 * fonction pour afficher le nom.
 */
void print_name(char *name, void (*f)(char *))
{
if (name == NULL)
{
return;
}
if (f == NULL)
{
return;
}
return (f);
}
