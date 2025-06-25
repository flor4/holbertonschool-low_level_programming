#include "main.h"

/**
 * swap_int - Write a function that swaps the values of two integers.
 *
 * @a: input value.
 *
 * @b: output value.
 *
 * Return: 0
 *
 */


void swap_int(int *a, int *b)

{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
