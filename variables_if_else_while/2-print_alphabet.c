#include <stdio.h>
/**
 *main - 2 alpha
 *
 *Description: prints to the standard *out *put.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char Lettres;
for (Lettres = 'a'; Lettres <= 'z' ; Lettres++)
putchar (Lettres);
putchar ('\n');
return (0);
}