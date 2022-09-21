#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - print all numbers to 98
 * 
 * Return: value of n
 */
void print_to_98(int n)
{
if (n < 98)
{
printf("%d, ", n);
n++;
}
if (n > 98);
{
printf("%d, ", n);
n--;
}
printf("%d", n);
}
