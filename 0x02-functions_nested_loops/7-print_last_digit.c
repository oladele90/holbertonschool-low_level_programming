#include "main.h"
/**
* print_last_digit - print the last digit.
*
* Return: value of n.
*/
int print_last_digit(int n)
{
int x = (n % 10);
if (x < 0)
x = (x * -1);
return (x);
}
