#include "3-calc.h"

/**
 * get_op_func - Sélectionne la fonction appropriée pour un opérateur donné
 * @s: L'opérateur sous forme de chaîne de caractères
 *
 * Retourne un pointeur vers la fonction correspondante ou NULL si
 * l'opérateur est invalide
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
{"+", op_add},
{"-", op_sub},
{"*", op_mul},
{"/", op_div},
{"%", op_mod},
{NULL, NULL}
};
int i = 0;
while (ops[i].op != NULL)
{
if (*s == *(ops[i].op))
{
return (ops[i].f);
}
i++;
}
return (NULL); 
}
