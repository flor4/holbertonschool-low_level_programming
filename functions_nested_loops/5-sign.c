#include "main.h"

/**
 *print_sign - a function that prints the sign of a number.
 *
 *@n: n is an o without a bar
 *
 *Return: 0
 *
 */



int print_sign(int n)

{

	if (n > 0)

	{
		_putchar(43);
		return (1);
	}

	else if (n < 0)

	{
		_putchar(45);
		return (-1);
	}

	else

	{
		_putchar(48);
		return (0);
	}

}

