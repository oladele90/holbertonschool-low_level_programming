#include "function_pointers.h"

/**
 * int_index - searches array for integer that matches
 * @array: pointer to array
 * @size: size of array
 * @cmp: pointer to function
 * Return: pointer to integer that matches or -1 for error
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
