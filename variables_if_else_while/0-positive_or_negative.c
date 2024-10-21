#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - 0
 *
 *Description: prints positive,zero,negative to the standard *out *put.
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
else
{
printf("%d is negative\n", n);
}
return (0);
}
