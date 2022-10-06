#include "main.h"

/**
 * _print_rev_recursion - check the code
 * @s: points to character in string
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
