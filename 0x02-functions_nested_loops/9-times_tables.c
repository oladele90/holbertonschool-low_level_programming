#include "main.h"
/**
* jack_bauer - print the minutes in a day.
*Return:
*/
void jack_bauer(void)
{
int n = 0, m = 0, l
while (m <= 9)
{
while (n < 9)
{
l = (m * n);
_putchar(l + '0');
_putchar(',');
_putchar(' ');
n++;
}
_putchar(l + '0');
n = 0;
m++
}