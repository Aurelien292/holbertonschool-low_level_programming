#include "main.h"
#include <stdio.h>
/**
 * fizz_buzz - Imprime les nombres de 1 à 100 avec des substitutions.
 *
 * Description: Pour chaque nombre de 1 à 100, la fonction imprime:
 * - "FizzBuzz" si le nombre est divisible par 3 et 5.
 * - "Fizz" si le nombre est divisible par 3.
 * - "Buzz" si le nombre est divisible par 5.
 * - Le nombre lui-même s'il n'est divisible ni par 3 ni par 5.
 * Chaque sortie est suivie d'un espace.
 */
void fizz_buzz(void)
{
int i;
int a = 3;
int b = 5;
for (i = 1 ; i <= 100 ; i++)
{
if ((i % a) == 0 && (i % b) == 0)
{
printf("FizzBuzz");
_putchar(' ');
}
else if ((i % a) == 0)
{
printf("Fizz");
_putchar(' ');
}
else if ((i % b) == 0)
{
printf("Buzz");
_putchar(' ');
}
else
{
printf("%d", i);
_putchar(' ');
}
}
}



