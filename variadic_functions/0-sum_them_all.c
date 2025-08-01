#include "variadic_functions.h"

/**
 * sum_them_all - Write a function that
 * returns the sum of all its parameters.
 *
 * @n: unsigned int.
 *
 * Return: sum.
 *
 */

int sum_them_all(const unsigned int n, ...)
{

	int sum = 0;
	unsigned int i = 0;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}

