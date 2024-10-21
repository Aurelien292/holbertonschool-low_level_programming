#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - 0
 *
 *Description: This function prints positive,zero,negative to the standard  *output.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else if
{
printf("%d is negative\n", n);
}
return (0);
}
