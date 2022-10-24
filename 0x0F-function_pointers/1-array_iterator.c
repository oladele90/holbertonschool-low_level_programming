#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes each element of an array of functions
 * @size: size of array
 * @action: pointer to function in array
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		(action)(array[i]);
}
