#ifndef DOG_H
#define DOG_H
/**
 *struct dog - creates structure
 * @name: dog name
 * @age: do age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);


#endif