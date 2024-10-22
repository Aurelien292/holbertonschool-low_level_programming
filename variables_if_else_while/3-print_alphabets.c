#include <stdio.h>

/**
 *main -3 alpha
 *
 *Description: prints to the standard *out *put.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char Lettres;
for (Lettres = 'a'; Lettres <= 'z' ; Lettres++)
{
putchar(Lettres);
}
for (Lettres = 'A'; Lettres <= 'Z' ; Lettres++)
{
putchar(Lettres);
}
putchar('\n');
return (0);
}
