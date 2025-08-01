#include "dog.h"

/**
 * print_dog - Write a function that prints a struct dog.
 *
 * @d: pointer of.
 *
 * return: an element of d is NULL,
 * print (nil) instead of this element.
 * (if name is NULL, print Name: (nil)
 *
 */

void print_dog(struct dog *d)

{
	if (d == NULL)
	{
		return;
	}
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %.6f\n", d->age);

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}

}
