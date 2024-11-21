#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - Affiche différents types d'arguments séparés par une virgule.
 * @format: Une chaîne de caractères qui contient les types d'arguments.
 *          Chaque caractère représente un type d'argument, avec
 * les valeurs suivantes :
 *            'c' : char
 *            'i' : integer
 *            'f' : float
 *            's' : chaîne de caractères (char *)
 *          Si la chaîne de caractères est NULL, "(nil)" sera affiché
 * à la place.
 * Description :
 * La fonction prend un nombre variable d'arguments. Le format est
 * spécifié par la chaîne `format`, et chaque caractère dans cette
 * chaîne indique le type de l'argument correspondant
 * dans l'ordre. La fonction affiche les arguments séparés par une
 * virgule et un espace. Si un  argument est de type `NULL` pour
 * une chaîne de caractères, elle
 * affiche "(nil)". À la fin, un saut de ligne est ajouté pour
 * formater correctement la sortie.
 */
void print_all(const char * const format, ...)
{
unsigned int tab = 0;
va_list args;
float f;
char c;
char *s;
int i;
va_start(args, format);
while (format && format[tab])
{
if (tab > 0)
{
printf(", ");
}
switch (format[tab])
{
case 'c':
c = va_arg(args, int);
printf("%c", c);
break;
case'i':
i = va_arg(args, int);
printf("%d", i);
break;
case 'f':
f = va_arg(args, double);
printf("%f", f);
break;
case 's':
s = va_arg(args, char *);
if (s == NULL)
{
printf("(nil)");
}
else
{
printf("%s", s);
break;
}
}
tab++;
}
va_end(args);
printf("\n");
}
