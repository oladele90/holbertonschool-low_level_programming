#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - allocates memory for array and sets values = 0
 * @nmemb: elements of array
 * @size: size of elements
 * Return: pointer to memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *i;
	void *array = malloc(nmemb * size);
	unsigned int n = 0;

	if (!array)
	{
		free(array);
		return (NULL);
	}
	if ((nmemb <= 0) || (size <= 0))
		return (NULL);
	i = array;

	while (n < (nmemb * size))
	{
		i[n] = 0;
		n++;
	}
	return (array);
}
