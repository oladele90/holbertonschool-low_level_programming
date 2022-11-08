#include <stdio.h>
#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 * @index: is the index, starting from 0 of the bit you want to set
 * @n: integer
 * Return: new integer
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	*n |= (1 << index);
	return (1);
}
