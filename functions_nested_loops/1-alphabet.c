#include <stdio.h>
#include "main.h"
/**
 *main -print 1 alphabet char c
 *
 *Description:_putchar prints to the standard *out *put.
 *@c:ecrit le caractere a afficher.
 *print_aphabet():Appelle la fonction pour afficher l'alphabet
 *Return: Always 0 (Success)
 */
int main(void)
void print_alphabet(void)
{
char c = 'a';
while (c <= 'z')
{
_putchar(c);
c++;
}
_putchar('\n')
print_alphabet();
return (0);
}
