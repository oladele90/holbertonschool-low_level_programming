#include "main.h"

/**
 * _puts - prints character in string
 *@str: character in a string
 * Return: Always 0.
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
