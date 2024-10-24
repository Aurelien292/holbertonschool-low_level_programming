#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - prints the last digit of a number
 * @ld: the number to extract the last digit from
 *
 * Return: the value of the last digit
 */

void jack_bauer(void);
{
int hour;
int minute;
for (hour = 0; hour <= 23; hour++)
{
for (minute = 0; minute <= 59; minute++)
{
printf("%02d:%02d\n", hour , minute);
}
}
return (0);
}
