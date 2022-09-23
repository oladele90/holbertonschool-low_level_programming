#include "main.h"

/**
 * print_line - print straight line
 *@n: number of times _ will be printed
 * Return: value of n
 */

void print_line(int n)
{
	if (n > 0)
	{
		_putchar('_');
		n--;
	}
	if (n < 0)
	{
		_putchar('_');
		n++;
	}
	_putchar('\n');
}
