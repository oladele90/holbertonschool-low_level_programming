#include "main.h"

/**
 * more_numbers - print more numbers
 *
 * Return: nothing
 */

void more_numbers(void)
{
	int i = 0, n = 0;

	while (i <= 9)
	{
		while (n < 15)
		{
			if (n > 9)
			{
				_putchar('1');
			}
				_putchar(n % 10 + '0');
				n++;
		}
		_putchar('\n');
		i++;
		n = 0;
	}
}
