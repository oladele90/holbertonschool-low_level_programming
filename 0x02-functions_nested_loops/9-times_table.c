#include "main.h"
/**
*times_table - print times table.
*Return:
*/
void times_table(void)
{
int n = 0, m = 0, l;
while (m <= 9)
{
while (n < 9)
{
l = (m * n);
 if (l <= 9)
   {
_putchar(l + '0');
_putchar(',');
_putchar(' ');
   }
 else
   {
_putchar(l);
_putchar(',');
_putchar(' ');
   }
n++;
}
 if (l <= 9)
   {
_putchar(l + '0');
n = 0;
m++;
   }
 else
{
_putchar(l + '0');
n = 0;
m++;
}
}
}
