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
char hex[] = "0123456789abcdef";
for (int i = 0; i < 16; i++)
{
putchar(hex[i]);
}
putchar('\n');
return (0);
}
