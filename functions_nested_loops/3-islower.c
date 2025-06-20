#include "main.h"

/**
 * _islower - a function that checks for lowercase character.
 *
 * @c: c is a a without an a
 *
 * Return: 0
 */

int _islower(int c)

{


	if (islower(c))

	{
		_putchar('1');
	}

	else

	{
		_putchar('0');
	}

return (0);
}
