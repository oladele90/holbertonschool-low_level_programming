#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - allocates new space in memory and copies a given string into it
 * @str: pointer to string that needs to be copied
 * Return: pointer to new string
 */

char *_strdup(char *str)
{
	char *str2;
	int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	i++
	str2 = malloc(sizeof(*str) * i);
	for (i = 0; str[i] != '\0'; i++)
	{
		str2[i] = str[i];
	}
	return (str2);
}
