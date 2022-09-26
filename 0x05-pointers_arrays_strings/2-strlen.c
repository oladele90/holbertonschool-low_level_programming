#include "main.h"

/**
 *_strlen - string to be counted
 *@s: character in string
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
