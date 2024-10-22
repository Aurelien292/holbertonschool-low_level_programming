#include <stdio.h>
/**
 *main - 8 base 16
 *
 *Description: prints to the standard *out *put.
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
for (int Num = 0; Num < 16; Num++)
{
if (Num < 10)
putchar(Num + '0');
else
putchar(Num - 10 + 'a');
}
putchar('\n');
return (0);
}
