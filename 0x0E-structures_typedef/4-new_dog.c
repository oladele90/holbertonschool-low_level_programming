#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
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

	if (name == NULL || age != age || owner == NULL)
		return (NULL);
	gary = malloc(sizeof(dog_t));
	if (!gary)
		return (NULL);
	gary->name = name;
	gary->age = age;
	gary->owner = owner;
	return (gary);
}
