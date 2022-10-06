#include "main.h"

/**
 * _pow_recursion - finds the value of number (x) to the power of number (y)
 * @x: number
 * @y: power of
 * Return: value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, (y - 1)));
}
