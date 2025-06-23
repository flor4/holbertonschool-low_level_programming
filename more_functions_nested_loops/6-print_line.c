#include "main.h"


/**
 *print_line - Write a function that
 *draws a straight line in the terminal.
 *
 *@n: number of.
 *
 *
 */


void print_line(int n)


{
	int print_line;

	for (print_line = 0; print_line < n; print_line++)

	{
		_putchar('_');

	}
	_putchar('\n');
}
