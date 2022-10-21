#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strcpy - Copies a string pointed to by @src, including the
 *           terminating null byte, to a buffer pointed to by @dest.
 * @dest: A buffer to copy the string to.
 * @src: The source string to copy.
 *
 * Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
int index = 0;

while (src[index])
{
	dest[index] = src[index];
	index++;
}
dest[index] = '\0';
return (dest);
}

/**
* new_dog - cretes new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: struct
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *gary;
	int i, j;

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; name[j] != '\0'; j++)
		;
	if (name == NULL || age != age || owner == NULL)
		return (NULL);
	gary = malloc(sizeof(dog_t));
	if (!gary)
	{
		free(gary);
		return (NULL);
	}
	gary->name = malloc(i);
	if (gary->name == NULL)
	{
		free(gary->name);
		free(gary);
		return (NULL);
	}
	gary->age = age;
	gary->owner = malloc(j);
	if (gary->owner == NULL)
	{
		free(gary->owner);
		free(gary);
		return (NULL);
	}
	_strcpy(gary->name, name);
	_strcpy(gary->owner, owner);
	return (gary);
}
