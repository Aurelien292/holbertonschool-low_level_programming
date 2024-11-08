#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Additionne les arguments passés au programme s'ils sont des entiers.
 * @argc: Le nombre d'arguments passés au programme.
 * @argv: Le tableau de chaînes de caractères contenant les arguments.
 *
 * Return: 0 si le programme s'exécute avec succès, ou 1 si une
 * erreur survient.
 */
int main(int argc, char *argv[])
{
int i;
int sum = 0;
int j = 0;
if (argc == 1)
{
printf("0\n");
return (0);
}
{
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (1);
}
}
sum += atoi(argv[i]);
}
printf("%d\n", sum);
return (0);
}
}
