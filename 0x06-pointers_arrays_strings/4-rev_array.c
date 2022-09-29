#include "holberton.h"

/**
 * reverse_array - reverse elaments in array
 *@a: array
 *@n: amount of elements to reverse
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	int i = 0, p = n - 1, temp;

	while (i < p)
	{
		temp = a[i];
		a[i] = a[p];
		a[p] = temp;
		i++;
		p--;
	}
}
