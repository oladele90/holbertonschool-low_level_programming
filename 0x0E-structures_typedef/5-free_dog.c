#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - frees structure
 * @d: structure that is full
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
