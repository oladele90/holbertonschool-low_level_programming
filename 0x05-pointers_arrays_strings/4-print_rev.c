#include "main.h"

/**
 * print_rev - print the string in reverse
 *@s: character in string
 * Return: Always 0.
 */

void print_rev(char *s)
{

	while (*s != '\0')
	{
		s++;
	}
	s--;

	while (*s)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
