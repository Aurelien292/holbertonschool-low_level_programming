#include "main.h"
#include <stdio.h>




void print_diagsums(int *a, int size)
{
  int i = 0;
int ligne = 0;
int colonne = 0;

 for(i = 0; i < size ; i++)
   {
     ligne += a[i * size + i];
     colonne += a[i * size + (size - 1 - i)];
   }
     
     
	printf ("%d, %d\n",ligne, colonne);

}
