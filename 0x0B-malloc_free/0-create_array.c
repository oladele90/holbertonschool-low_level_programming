#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @c: character to initialize array
 * @size: size of array
 * Return: Null
 */

char *create_array(unsigned int size, char c)
{
	int s;
	char *array;

	array = malloc(sizeof(c) * size);
	if ((array == NULL) || (size == 0))
	{
		return (NULL);
	}
	for (s = 0; s < size; s++)
	{
		array[s] = c;
	}
	return (array);
}
