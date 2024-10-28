#include "main.h"
/**
 * print_line - Prints the numbers caractere
 * followed by a new line
 *
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
for (int i = 0; i < n ; i++)
{
_putchar('_');
}
_putchar('\n');
}
return (0);
}
