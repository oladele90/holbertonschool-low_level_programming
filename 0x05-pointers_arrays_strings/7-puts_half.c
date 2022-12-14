#include "main.h"

/**
 * puts_half - prints second half of string
 * @str: character in string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int count = 0;
	int i;

	while (*(str + count) != '\0')
	{
		count++;
	}
	if (count % 2 == 0)
	{
		for (i = count / 2; ((i < count) && (i != '\0')); i++)
		{
			_putchar(str[i]);
		}
	}
	if (count % 2 == 1)
	{
		for (i = ((count + 1) / 2); ((i  < count) && (i != '\0')); i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
