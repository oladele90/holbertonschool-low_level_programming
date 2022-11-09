#include "main.h"
/**
 * create_file - creates a file
 * @filename: points to file name of file to create
 * @text_content: pointer to string to write in a file
 * Return: 1 for success or -1 for fail
 */

int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (o == -1)
		return (-1);
	w = write(o, text_content, len);
	if (w == -1)
		return (-1);
	close(o);
	return (1);
}
