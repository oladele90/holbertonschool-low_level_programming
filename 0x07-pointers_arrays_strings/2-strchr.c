#include "main.h"

/**
 * _strchr - check for occurrence of character
 * @s: pointer to string
 * @c: character that function will check for
 * Return: s
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
		if (s[i] == c)
		{
			return (s + i);
		}
		else
			return ('\0');
}
