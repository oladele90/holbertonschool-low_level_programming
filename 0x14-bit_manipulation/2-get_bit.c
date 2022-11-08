#include <stdio.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: the index of the bit you want to get
 * @n: the integer
 * Return: bit.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
