#include "main.h"

/**
 * *create_array - Write a function that creates an array of chars,
 * and initializes it with a specific char.
 *
 * @size: size of.
 *
 * @c: character of.
 *
 * Return:  NULL if size = 0,
 *
 * or return a pointer to the array, or NULL if it fails.
 *
 */

char *create_array(unsigned int size, char c)

{
	unsigned int i = 0;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
