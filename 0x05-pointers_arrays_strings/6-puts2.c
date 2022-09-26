#include "main.h"

/**
 * puts2 - prints every other digit
 *@str: points to character in string
 * Return: Always 0.
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}
	_putchar('\n');
}
