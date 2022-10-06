#include "main.h"

/**
 * _strlen_recursion - prints lenght of string
 * @s: points to character in string
 * Return: integer
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
