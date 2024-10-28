#include "main.h"
/**
 * more_numbers - Affiche les nombres de 0 à 14
 * Return: Rien. La fonction n'a pas de valeur de retour.
 */

void more_numbers(void)
{
int i;
int reset = 0;
int oups;
int loop;
for (loop = 0; loop <= 9; loop++)
{
for (i = 0; i <= 9; i++)
{
if (oups == 1)
{
i = 0;
oups = 0;
}
if (reset == 1 && i <= 4)
{
_putchar(49);
}
if (reset == 0 || i <= 4)
{
_putchar(i + '0');
}
if (i == 9 && reset < 1)
{
reset = reset + 1;
i = 0;
oups = 1;
}
}
reset = 0;
_putchar('\n');
}
}
