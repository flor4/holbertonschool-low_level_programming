#include "main.h"

/**
 * print_diagonal - Write a function that draws
 * a diagonal line on the terminal.
 *
 * @n: int to check.
 *
 * Return: 0
 *
 */




void print_diagonal(int n)


{

	int print_diagonal, space;

	if (n > 0)


		for (print_diagonal = 0; print_diagonal < n; print_diagonal++)
		{
			for (space = 0; space < n; space++)
			{
				if (print_diagonal == space)
				{

					_putchar(92);
					break;
				}

				else
				{
					_putchar(' ');
				}

			}

			_putchar('\n');
		}
	else
	{
		_putchar('\n');
	}
}

