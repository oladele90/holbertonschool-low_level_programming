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
	unsigned int i = 0, k = 0, t = 1;

	while (s[i] == accept[k] && s[i])
	{
		i++;
		t++;
	}
	while (s[i] != accept[k] && accept[k])
	{
		k++;
		if (s[i] == accept[k])
		{
			k = 0;
			i++;
			t++;
		}
	}
	if (accept[k] != '\0')
		return (t);
	else
		return ('\0');
}
