#include "main.h"

/**
 * void print_most_numbers - Prints the numbers from 0 to 9, followed by a new line
 *
 * Description: Uses _putchar to print each number
 */
void print_most_numbers(void)
{
int i =0;
for (i = 48; i <= 57 ; i++)
{
if (i != 50 && i != 52)
{
_putchar (i);
}
}
_putchar ('\n');
}
