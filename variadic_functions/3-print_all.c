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
va_list args;
char *str = "";
int i = 0;
char *separator = "";
va_start(args, format);
while (format && format[i])
{
switch (format[i])
{
case 'c':
printf("%s%c", separator, va_arg(args, int));
break;
case'i':
printf("%s%d", separator, va_arg(args, int));
break;
case 'f':
printf("%s%f", separator, va_arg(args, double));
break;
case 's':
printf("%s%s", separator, va_arg(args, char *));
if (str == NULL)
{
printf("(nil)");
}
break;
default:
i++;
continue;
}
separator = ", ";
i++;
}
printf("\n");
va_end(args);
}
