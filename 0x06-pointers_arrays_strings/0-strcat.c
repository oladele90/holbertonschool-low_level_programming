#include "holberton.h"

/**
 * strcat - concatenate two strings
 *
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int len1 = 0, len2 = 0 , i;

	while(*(dest + len1))
	{
		len1++;
	}
	while (*(src + len2))
	{
		len2++;
	}
	for (i = 0; i <= len2; i++)
	{
		dest[len1++] = src[i];
	}
	return(dest);
}
