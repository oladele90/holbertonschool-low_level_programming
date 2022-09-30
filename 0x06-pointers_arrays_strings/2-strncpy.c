#include "holberton.h"

/**
 * _strncpy - copy string
 *@dest: ponter to string that should be returned
 *@src: ponter to string that needs to be copied
 *@n: amount of characters to copy
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
int  i = 0;

while ((i < n) && (src[i] != '\0'))
{
	dest[i] = src[i];
	i++;
}
while (i < n)
{
	dest[i] = '\0';
	i++;
}
return (dest);
}