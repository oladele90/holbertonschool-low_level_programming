#include "main.h"

/**
 * square_it - finds square root of number using recursion
 * @r: number to find square root of
 * @i: iterates through numbers untile number returns false
 * Return: square root
 */

int square_it(int r, int i)
{
	if ((i * i) > r)
	{
		return (-1);
	}
	if ((i * i) == r)
	{
		return (i);
	}
	return (square_it(r, i + 1));
}
/**
 * _sqrt_recursion - returns  square root of number using recursion
 * @n: number to find square root of
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == -1)
	{
		return (-1);
	}
	return (square_it(n, 0));
}
