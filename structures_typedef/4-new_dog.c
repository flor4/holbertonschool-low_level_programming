#include "dog.h"
#include <string.h>

/**
 * copy_string - function to duplicate a string.
 *
 * @str: string.
 *
 * Return: copy or NULL.
 */


char *copy_string(const char *str)
{
	char *copy;

	if (str == NULL)
		return (NULL);

	copy = malloc(strlen(str) + 1);

	if (copy == NULL)
		return (NULL);

	strcpy(copy, str);

	return (copy);

}

/**
 * *new_dog - function that create a new dog.
 *
 * @name: of the new dog.
 * @age: of the new dog.
 * @owner: of the new dog.
 *
 * Return: NULL if fail.
 *
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_doggy;

	new_doggy = malloc(sizeof(dog_t));

	if (new_doggy == NULL)
		return (NULL);

	new_doggy->name = copy_string(name);
	if (new_doggy->name == NULL)
	{
		free(new_doggy);
		return (NULL);
	}

	new_doggy->owner = copy_string(owner);
	if (new_doggy == NULL)
	{
		free(new_doggy->name);
		free(new_doggy);
		return (NULL);
	}

	new_doggy->age = age;

	return (new_doggy);
}
