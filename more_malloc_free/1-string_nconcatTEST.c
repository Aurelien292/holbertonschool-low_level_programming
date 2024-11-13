#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)

{

unsigned int long1 = 0;
unsigned int long2 = 0;
unsigned int i;
char *resultat;
unsigned int copy_s2;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[long1] != '\0')
{
long1++;
}
while (s2[long2] != '\0')
{
long2++;
}
if (n < long2)
{
copy_s2 = n;
}
else
{
copy_s2 = long2;
}
resultat = (char *)malloc(sizeof(char) * (long1 + copy_s2 + 1));
if (resultat == NULL)
{
return (NULL);
}
for (i = 0; i < long1; i++)
{
resultat[i] = s1[i];
}
for (i = 0; i < copy_s2; i++)
{
resultat[long1 + i] = s2[i];
}
resultat[long1 + i] = '\0';
return (resultat);
}
