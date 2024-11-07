#include <stdio.h>

/**
 * main - Affiche le nombre d'arguments passés au programme
 * @argc: Le nombre d'arguments passés au programme
 * @argv: Un tableau de chaînes de caractères représentant les arguments
 * Description: Ce programme affiche le nombre d'arguments
 * passés au programme,
 * y compris le nom du programme lui-même, qui est toujours le
 * premier argument
 * (`argv[0]`).
 *
 * Return: Retourne toujours 0 pour indiquer un succès.
 */
int main(int __attribute__((unused))argc, char *argv[])
{
printf("%d\n", argc - 1);
return (0);
}
