#include "main.h"
/**
* print_sign - check to see if number is 0, positive, or negative.
*@n: return value
* Return: 1 if n is positive, 0 if n is 0, or -1 if n is negative
*/
int print_sign(int n)
{
if (n >= 1)
{
_putchar('+');
return (1);
}
else if (n <= -1)
{
_putchar('-');
return (-1);
}
else
{
_putchar('0');
return (0);
}
}
