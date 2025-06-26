#include "main.h"


/**
 * puts2 - Write a function that prints every other character of a string,
 * starting with the first character.
 *
 * @str : string.
 *
 * Return: 0
 *
 */


void puts2(char *str)


{
	int i = 0;
	int everyOtherChar = 0;

	while (str[everyOtherChar] != '\0')
	{
		everyOtherChar++;
	}

	while (i < everyOtherChar)
	{
		_putchar(str[i]);

		i + = 2;
	}

	_putchar('\n');



}

