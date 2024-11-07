#include <stdio.h>
/**
 * main - Affiche tous les arguments passés au programme
 * @argc: Le nombre d'arguments passés au programme
 * @argv: Un tableau de chaînes de caractères représentant les arguments
 *
 * Description: Ce programme affiche tous les arguments passés au programme,
 * y compris le nom du programme lui-même (qui est le premier argument,
 * argv[0]).
 * Chaque argument est affiché sur une nouvelle ligne.
 *
 * Return: Retourne toujours 0 pour indiquer un succès.
 */


int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
