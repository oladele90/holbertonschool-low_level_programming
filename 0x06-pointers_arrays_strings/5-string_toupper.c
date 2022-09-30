#include "holberton.h"

/**
 * string_toupper - change from lower case to upper
 *@str: value manipulated and  returned to function
 * Return: new string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if ((str[i] >= 'a') && (str[i] <= 'z'))
			str[i] = str[i] - ' ';
		i++;
	}
	return (str);
}
