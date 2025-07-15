#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes
 * a function given as a parameter on each element of an array.
 *
 * @array: array as parameter.
 * @size: is the size of the array.
 * @action: is a pointer to the function you need to use.
 *
 * Return: array.
 *
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && action != NULL)

		for (i = 0; i < size; i++)

			action(array[i]);


}
