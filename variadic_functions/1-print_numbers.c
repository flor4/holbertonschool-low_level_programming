#include "variadic_functions.h"

/**
 * print_numbers - Write a function that prints numbers.
 *
 * @separator: the string to be printed between numbers.
 * @n: the number of integers passed to the function.
 *
 * Return: separator is NULL, don’t print it.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);

}
