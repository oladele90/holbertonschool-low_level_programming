#include "holberton.h"

/**
 * cap_string - change words from lower case to upper
 *@str: value manipulated and  returned to function
 * Return: new string
 */

char *cap_string(char *str)
{
	int i = 0;

	if ((str[i == 0]) && (str[i] >= 'a' && str[i] <= 'z'))
	{
		str[i] = str[i] - ' ';
	}
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') && (str[i - 1] == ',' ||
		   str[i - 1] == ';' || str[i - 1] == '.' ||
		   str[i - 1] == '!' || str[i - 1] == '?' ||
		   str[i - 1] == '"' || str[i - 1] == '(' ||
		   str[i - 1] == ')' || str[i - 1] == '{' ||
		   str[i - 1] == '}' || str[i - 1] == ' ' ||
		   str[i - 1] == '\n' || str[i - 1] == '\t'))
		{
			str[i] = str[i] - ' ';
		}
		i++;
	}
	return (str);
}
