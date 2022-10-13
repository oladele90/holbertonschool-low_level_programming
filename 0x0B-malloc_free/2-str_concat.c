#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - makes new space in memory and copies a given strings into it
 * @s1: pointer to string that needs to be copied
 * @s2: pointer to string that needs to be copied
 * Return: pointer to new string
 */

char *str_concat(char *s1, char *s2)
{
char *str;
int i = 0, j = 0;

if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[i] != '\0')
{
	i++;
}
while (s2[j] != '\0')
{
	j++;
}
j++;
str = malloc(sizeof(*str) * (i + j));
if (!str)
{
	return (NULL);
}
for (i = 0; s1[i] != '\0'; i++)
{
	str[i] = s1[i];
}
for (j = 0; s2[j] != '\0'; j++)
{
	str[i] = s2[j];
	i++;
}
return (str);
}
