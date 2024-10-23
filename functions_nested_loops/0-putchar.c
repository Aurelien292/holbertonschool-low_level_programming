#include <stdio.h>
/**
 *main -print 0 _putchar char c
 *
 *Description:_putchar prints to the standard *out *put.
 *@c :ecrit le caractere a afficher 
 *Return: Always 0 (Success)
 */
int _putchar(char c);
int main(void)
{
const char *put = "_putchar\n";
while (*put)
{
_putchar(*put++);
}
return (0);
