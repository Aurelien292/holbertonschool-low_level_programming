#include <stdio.h>
/**
 * main - Point d'entrée du programme FizzBuzz.
 *
 * Description: Cette fonction imprime les nombres de 1 à 100 avec des
 * substitutions. Pour chaque nombre:
 * - "FizzBuzz" est imprimé si le nombre est divisible par 3 et 5.
 * - "Fizz" est imprimé si le nombre est divisible par 3.
 * - "Buzz" est imprimé si le nombre est divisible par 5.
 * - Le nombre lui-même est imprimé s'il n'est divisible ni par 3 ni par 5.
 * Chaque sortie est suivie d'un espace, sauf après le dernier nombre.
 *
 * Return: Toujours 0 pour indiquer que le programme s'est terminé
 * correctement.
 */
int main(void)
{
int i;
int a = 3;
int b = 5;
for (i = 1; i <= 99; i++)
{
if ((i % a) == 0 && (i % b) == 0)
{
printf("FizzBuzz");
putchar(' ');
}
else if ((i % a) == 0)
{
printf("Fizz");
putchar(' ');
}
else if ((i % b) == 0)
{
printf("Buzz");
putchar(' ');
}
else
{
printf("%d", i);
putchar(' ');
}
}
if (i == 100)
{
printf("Buzz");
}
putchar('\n');
return (0);
}



