#include "main.h"

/**
 * print_most_numbers - Write a function that prints the numbers,
 * from 0 to 9.
 *
 * Return: 0
 *
 */

void print_most_numbers(void)



{

	int print_most_numbers;

	for (print_most_numbers = 48; print_most_numbers <= 57; print_most_numbers++)

	{
		if (print_most_numbers == 50 || print_most_numbers == 52)

			continue;

		_putchar (print_most_numbers);
	}

	_putchar ('\n');
}

