#include "main.h"

/**
 * puts2 - prints every other digit
 *@str: points to character in string
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i = 0;

	while (*str)
	{
		if (str[i] % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
	}
	_putchar('\n');
}
