#include <stdio.h>
/**
 *main -4 alpha
 *
 *Description: prints to the standard *out *put.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
char Lettres;
for (Lettres = 'a'; Lettres <= 'z'; Lettres++)
{
if (Lettres != 'e' && Lettres != 'q')
putchar(Lettres);
}
putchar('\n');
return (0);
}
