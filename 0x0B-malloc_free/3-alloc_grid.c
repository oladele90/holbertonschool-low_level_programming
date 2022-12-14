#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns pointer to two dimensional array of int
 * @width: width of grid
 * @height: height of grid
 * Return: NULL if height or width are <= 0
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int i, j;

	if ((width <= 0) || (height <= 0))
	{
		return (NULL);
	}
	array = malloc(height * sizeof(int *));
	if (!array)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (!array[i])

		{
			for (; i >= 0; i--)
				free(array[i]);
			free(array);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
