#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog.
 *
 * @d: pointer of.
 * @name: name of.
 * @age: age of.
 * @owner: onwer of.
 *
 * Return: stop excution if nothing in d.
 *
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}

	d->name = name;
	d->age = age;
	d->owner = owner;
}





