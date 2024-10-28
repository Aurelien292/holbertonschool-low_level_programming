#include "main.h"
/**
 * print_line - Prints the numbers caractere
 * followed by a new line
 * @n: number of times print _
 * Description: Uses _putchar to print each number
 */
void print_line(int n)
{
for (; n > 0; n--)
{
_putchar('_');
}
_putchar('\n');
}
