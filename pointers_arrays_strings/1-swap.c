#include "main.h"

/**
 * swap_int - Échange les valeurs de deux entiers.
 * @a: Pointeur vers le premier entier.
 * @b: Pointeur vers le deuxième entier.
 *
 * Description: Cette fonction prend deux pointeurs vers des entiers
 * et échange leurs valeurs en utilisant une variable temporaire.
 */
void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
