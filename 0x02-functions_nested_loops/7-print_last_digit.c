#include "main.h"
/**
* print_last_digit - print the last digit.
*@n: value returned
* Return: value of n.
*/
int print_last_digit(int n)
{
int x = (n % 10);
if (x < 0)
x = (x * -1);
_putchar('0' + x);
return (x);
}
