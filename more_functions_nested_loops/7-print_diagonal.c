#include "main.h"

/**
 * print_diagonal - Draws a diagonal line in the terminal.
 * @n: The number of times the character '\' should be printed.
 *
 * Description: If n is 0 or less, the function only prints a newline.
 *              For positive n, it prints a diagonal line of '\' characters,
 *              with each character preceded by an increasing number of spaces.
 */
void print_diagonal(int n)
{
int i, j;
  
if (n <= 0)
{
_putchar('\n');
}
for (i = 0 ; i < n; i++)
{
for (j = 0 ; j < i; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
