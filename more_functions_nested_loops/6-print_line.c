#include "main.h"
/**
 * print_line - Prints the numbers caractere
 * followed by a new line
 * @n: number of times print _
 * Description: Uses _putchar to print each number
 */
void print_line(int n)
{
if (n <= 0)
{
_putchar('\n');
}
else
{
for (; n > 0; n--)
{
_putchar('_');
}
_putchar('\n');
}
}
