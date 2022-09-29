#include "holberton.h"

/**
 * _strncat - concatenate two strings
 *@dest: ponter to string that should be returned
 *@src: ponter to string to be appended to dest
 *@n: integer that declares how many bytes of src to print
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
int len1 = 0, len2 = 0, i;

while (*(dest + len1))
	len1++;
while (*(src + len2))
	len2++;
for (i = 0; ((i < n) && (i <= len2)); i++)
	dest[len1++] = src[i];
return (dest);
}
