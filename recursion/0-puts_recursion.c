#include "main.h"


/**
 * _puts_recursion - Write a function that prints a string,
 *  followed by a new line.
 *
 * @s: string.
 *
 * Return: the string 'Puts with recursion'.
 *
 */


void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
	{
		_putchar('\n');
	}
}

