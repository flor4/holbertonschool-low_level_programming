#include "main.h"


/**
 * *array_range - Write a function that creates an array of integers.
 *
 * @min: value form.
 * @max: to the value of.
 *
 * Return: NULL.
 *
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min + i;

	return (array);
}
