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

	gary = malloc(sizeof(dog_t));
	if (!gary)
		return (NULL);
	gary->name = name;
	if (gary->name == NULL)
		return (NULL);
	gary->age = age;
	if (gary->age != gary->age)
		return (NULL);
	gary->owner = owner;
	if (gary->owner == NULL)
		return (NULL);
	return (gary);
}
