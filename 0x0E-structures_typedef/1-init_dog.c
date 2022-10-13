#include "dog.h"

/**
 * init_dog - initializes the struct dog
 *
 * @d: pointer to struct dog
 * @name: dog's name
 * @owner: owner's name
 * @age: dog's age
 *
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
