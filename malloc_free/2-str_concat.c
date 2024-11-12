#include "main.h"
#include <stdlib.h>


char *str_concat(char *s1, char *s2)
{
int long1 = 0;
int long2 = 0;
int i;
char *resultat;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
while (s1[long1] != '\0')
long1++;
while (s2[long2] != '\0')
long2++;
resultat = (char *)malloc(sizeof(char) * (long1 + long2 + 1));
if (resultat == NULL)
return (NULL);
for (i = 0; i < long1; i++)
resultat[i] = s1[i];
for (i = 0; i < long2; i++)
resultat [long1 + i] = s2[i];
resultat [long1 + long2] = '\0';
return (resultat);
}
