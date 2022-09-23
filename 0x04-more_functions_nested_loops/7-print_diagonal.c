#include "main.h"

/**
 * print_diagonal - make diagonal lines
 *@n: number of times n will be printed
 * Return: n values.
 */

void print_diagonal(int n)
{
	int m = 1, i = m;
	
	while (n > 1)
	{
		_putchar('\\');
		_putchar('\n');
		if (n != 0)
		{
			while (i > 0)
			{
				_putchar(' ');
				i--;
			}
			m++;
			i = m;
		}
		n--;
	}
	if (n >= 1)
	{
		_putchar('\\');
	}
	_putchar('\n');
}
