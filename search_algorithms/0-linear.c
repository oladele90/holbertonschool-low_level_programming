#include "search.h"

/**
* linear_search -  searches for a value in an array
* @array: pointer to array
* @size: size of array
* @value: number to checked for
* Return: the index of value
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", (int)i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
