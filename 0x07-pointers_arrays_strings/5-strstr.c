#include <stddef.h>
#include "main.h"

/**
 * _strstr - check for first occurence of characters from string
 * @haystack: original string
 * @needle: string of characters to check for
 * Return: Always 0.
 */

char *_strstr(char *haystack, char *needle)
{
        int i = 0, c = 0, t;

        while (haystack[i] != '\0')
        {
		t = i;
		while (needle[c] != '\0' && needle[c] == haystack[i])
				    {
					    if (haystack[i] == '\0')
						    return (NULL);
					    c++;
					    i++;
					    if (needle[c] == haystack[i] &&
						needle [c + 1] == '\0')
					    {
						    return (haystack + t);
					    }
				    }
		c = 0;
		while (needle[c] != '\0' && needle[c] != haystack[i] &&
		       haystack[i] != '\0')
			i++;
	}
	return (NULL);
}
