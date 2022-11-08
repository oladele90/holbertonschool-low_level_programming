#include <stdio.h>
#include "main.h"

/**
 * print_binary - prints number in binary form
 * @n: number that should be converted
 * Return: Nothing
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
