#include "main.h"



/**
 * print_array - Write a function that prints n
 * elements of an array of integers.
 *
 * @a: array.
 *
 * @n: number.
 *
 * Return: 0
 *
 */

void print_array(int *a, int n)


{
	int lenghtOf;

	for (lenghtOf = 0; lenghtOf < n; lenghtOf++)
	{
		printf("%i", a[lenghtOf]);


		if (lenghtOf != n - 1)
		{
			printf(", ");
		}

	}

	putchar('\n');

}
