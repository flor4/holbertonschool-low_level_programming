#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer.
 *
 * @array: array a parameter.
 * @size: the number of element in the array.
 * @cmp: the pointer of the function
 * to be used to compare values.
 *
 * Return: no matched -1.
 *size <=0 return -1.
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
