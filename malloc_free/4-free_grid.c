#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - libère la mémoire allouée pour une matrice 2D
 * @grid: un tableau de pointeurs vers les lignes de la matrice
 * @height: le nombre de lignes dans la matrice
 * Description:
 * Cette fonction libère la mémoire allouée pour une matrice 2D
 * précédemment allouée dynamiquement. Elle libère d'abord chaque ligne de
 * la matrice (c'est-à-dire
 * chaque tableau d'entiers), puis libère le tableau de pointeurs lui-même.
 * Si l'argument `grid` est NULL, ou si `height` est égal à 0,
 * aucune opération de libération n'est effectuée.
 *
 * Retour: Rien (void).
 */
void free_grid(int **grid, int height)
{
int i;
if (grid != NULL && height > 0)
{
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
}
