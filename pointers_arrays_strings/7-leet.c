#include "main.h"

/**
 * leet - Convertit une chaîne en leet speak (chiffre ou 
 * caractere speciaux).
 * @s: La chaîne à convertir.
 *
 * Return: Un pointeur vers la chaîne modifiée.
 */
char *leet(char *s)
{
int i = 0;
int j;
char *Lettre = "aAeEoOtTlL";
char *Chiffre = "4433007711";
while (s[i] != '\0')
{
for (j = 0 ; Lettre[j] != '\0' ; j++)
{
if (s[i] == Lettre[j])
{
s[i] = Chiffre[j];
}
}
i++;
}
return (s);
}
