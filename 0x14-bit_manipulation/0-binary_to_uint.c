#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * binary_to_unit - converts binary number to unsigned int
 * @b: character string containing binary number
 * Return: converted binary number in form of unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int  n = 1, sum = 0;
	int i = 0;

	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		sum += ((b[i] - '0') * n);
		n *= 2;
	}
	return (sum);
}
