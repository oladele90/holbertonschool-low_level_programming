#include "main.h"

/**
 * _memcpy - copy n bytes from src to dest
 * @src: the address of memory to print
 * @n: the size of the memory to print
 * @dest:memory to copy to
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
