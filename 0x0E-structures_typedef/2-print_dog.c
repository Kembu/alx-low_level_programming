#include <stdio.h>
#include "dog.h"

/**
 * print_dog - function that prints struct dog elements
 * @d: pointer to struct
 *
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	else
	 printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("(nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}
