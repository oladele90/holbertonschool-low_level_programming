#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - creates an array of int
 *@min: lowest number included
 *@max: highest number included
 *Return: NULL for error or pointer to array for success
 */

int *array_range(int min, int max)
{
	int *array;
	int i, n = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(int) * (max - min + 1));
	if (!array)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		array[n] = i;
		n++;
	}
	return (array);
}
