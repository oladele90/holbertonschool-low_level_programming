#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - returns pointer to new space containing concatenated string
 * @s1: first string
 * @s2: second string
 * @n: amount of second string to concatenate
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, p = 0, s = 0, f;
	char *array;


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	i--;
	while ((j <= n) && (s2[j] != '\0'))
		j++;
	j--;
	f = (i + j);
	array = malloc(sizeof(char) *(f + 1));
	if (!array)
		return(NULL);
	while (s1[p] != '\0')
	{
		array[p] = s1[p];
		p++;
	}
	while ((s2[s] != '\0') && (p <= f))
	{
		array[p] = s2[s];
		p++;
		s++;
	}
	array[p] = '\0';
	return (array);
}
