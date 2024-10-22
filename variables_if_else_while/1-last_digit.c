#include <stdlib.h>
#include <time.h>
/**
 * main - 1
 *
 *Description: prints to the standard *out *put.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{ printf("and is greater than 5");
}
else if (n == 0)
{
printf("and is 0");
}
else
{
printf("and is less than 6 and not 0");
}
return (0);
}
