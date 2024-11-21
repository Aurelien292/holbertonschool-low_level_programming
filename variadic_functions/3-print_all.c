#include "variadic_functions.h"
#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>

/**
 * print_all - Affiche différents types d'arguments, séparés par une
 * virgule.
 * @format: Une chaîne de caractères contenant des caractères de format
 *          spécifiant les types des arguments à afficher.
 *          - 'c': un caractère
 *          - 'i': un entier
 *          - 'f': un flottant
 *          - 's': une chaîne de caractères
 * La fonction gère les arguments supplémentaires, les affiche en fonction de
 * leur type, et les sépare par une virgule. Si l'argument est une chaîne de
 * caractères et que cette chaîne est nulle, elle affiche "(nil)".
 * La fonction ignore tout caractère dans @format qui ne correspond pas à un
 * des types spécifiés ci-dessus.
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
