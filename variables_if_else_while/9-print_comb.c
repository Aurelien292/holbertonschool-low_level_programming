#include <stdio.h>
/**
 *main - 9 Patience
 *
 *Description: prints to the standard *out *put.
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int Num;

for (Num = 0; Num <= 9; Num++)
{
if (Num < 9)
putchar(Num + '0');
{
putchar (',');
putchar (' ');
}
}
putchar ('\n');
return (0);
}
