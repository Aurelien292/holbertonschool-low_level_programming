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
putchar("%x", Num);
}
putchar('\n')
return (0);
}
