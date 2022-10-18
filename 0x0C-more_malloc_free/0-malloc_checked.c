#include <stdio.h>
#include "main.h"
#include <stdlib.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using "malloc"
 * @b: pointer to integer
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
	{
		exit(98);
	}
	return (mem);
}
