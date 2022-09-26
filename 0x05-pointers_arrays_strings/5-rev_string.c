#include "main.h"

/**
 *rev_string - print the string in reverse
 *@s: character in string
 * Return: Always 0.
 */

void rev_string(char *s)
{

        while (*s != '\0')
        {
                s++;
        }
        s--;

        while (*s)
        {
                _putchar(*s);
                s--;
        }
        _putchar('\n');
}
