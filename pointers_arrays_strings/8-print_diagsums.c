#include "main.h"
#include <stdio.h>


/**
 * print_diagsums - Calcule et affiche la somme des deux diagonales d'une
 * matrice carrée.
 * @a: Pointeur vers la matrice représentée sous forme d'un tableau 1D.
 * @size: La taille de la matrice carrée (nombre de lignes/colonnes).
 *
 * Description: Cette fonction calcule les sommes des deux diagonales d'une
 * matrice carrée d'entiers et affiche les résultats. La diagonale
 * principale
 * va de l'élément (0, 0) à l'élément (size-1, size-1) et la diagonale
 * secondaire
 * va de l'élément (0, size-1) à l'élément (size-1, 0).
 * Les résultats des deux sommes sont ensuite affichés.
 *
 * Return: Rien. La fonction imprime simplement les résultats.
 */

void print_diagsums(int *a, int size)
{
int i = 0;
int ligne = 0;
int colonne = 0;
for (i = 0; i < size ; i++)
{
ligne += a[i * size + i];
colonne += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", ligne, colonne);
}
