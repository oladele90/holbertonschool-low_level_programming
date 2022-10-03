#include "main.h"

/**
 * _strspn - check for first occurence of characters fron string not in
 * string
 * @s: original string
 * @accept: string of characters to check for
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, k = 0;

	while (s[i] != '\0')
	{
		while (accept[k] != '\0')
		{
			if (s[i] == accept[k])
			{
				k = 0;
				break;
			}
			else
				k++;
		}
		if (accept[k] == '\0')
			return (i);
		else
			i++;
	}
		return (i);
}
