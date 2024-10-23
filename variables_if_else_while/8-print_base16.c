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
int Num;
for (Num = 0; Num < 10; Num++)
{
putchar(Num + '0');
}
for (Num = 10; Num < 16; Num++)
{
putchar(Num - 10 + 'a');
}
putchar('\n');
return (0);
}
