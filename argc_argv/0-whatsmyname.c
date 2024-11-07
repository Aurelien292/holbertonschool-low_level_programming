#include <stdio.h>

/**
 * main - Affiche le nom du programme
 * @argc: Le nombre d'arguments passés au programme
 * @argv: Un tableau de chaînes de caractères représentant
 * les arguments
 *
 * Description: Ce programme affiche le nom du programme, c'est-à-dire le
 * chemin du fichier ou simplement son nom, en fonction de la manière
 * dont il est exécuté. Si le programme est renommé, il affichera
 * automatiquement le nouveau nom sans avoir besoin de recompilation.
 *
 * Return: Retourne toujours 0 pour indiquer un succès.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
printf("%s\n", argv[0]);
return (0);
}
