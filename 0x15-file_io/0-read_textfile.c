#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *@filename: pointer to file to be read
 *@letters: number of letters to be read and printed
 * Return: Always 0.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	o = open(filename, 000);
	if (o == -1)
		return (0);
	r = read(o, buf, letters);
	if (r == -1)
		return (0);
	w = write(1, buf, r);
	if (w == -1 || w != r)
		return (0);
	close(o);
	return (w);
}
