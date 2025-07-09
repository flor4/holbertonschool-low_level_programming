#include "main.h"

/**
 * *_calloc - Write a function that allocates
 * memory for an array, using malloc.
 *
 * @nmemb: number of elements.
 * @size: size of elements.
 *
 * Return: NULL.
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, result;
	void *array;
	char *arrayChar;

	if (nmemb == 0 || size == 0)
		return (NULL);

	result = nmemb * size;

	array = malloc(result);
	if (array == NULL)
		return (NULL);

	arrayChar = (char *)array;
	for (i = 0; i < result; i++)
		arrayChar[i] = 0;
	return (array);
}
