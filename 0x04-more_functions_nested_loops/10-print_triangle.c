#include "main.h"

/**
 * print_triangle - make triangle
 *@size: number of times n will be printed
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, m = 1, n = 1, c;

	if (size <= 0)
		_putchar('\n');
	while ((m <= size) && (m > 0))
	{
		for (i = (size - n); i > 0; i--)
		{
			_putchar(' ');
		}
		for (c = m; c > i; c--)
		{
			_putchar('#');
		}
		_putchar('\n');
		m++;
		n++;
	}
}
