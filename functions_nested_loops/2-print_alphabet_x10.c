#include "main.h"

/**
 *print_alphabet_x10- affiche l'alphabet 10 fois
 *
 *Return: Always 0.
 */

int print_alphabet_x10(void)
{
int line;
char car;
for (line = 0; line <= 9; ++line)
{
for (car = 'a'; car <= 'z'; ++car)
{  
_putchar(car);
} 
_putchar('\n');
}
}
