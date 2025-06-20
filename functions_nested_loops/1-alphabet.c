#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: 0
 */

void print_alphabet(void)

{
	char lowerCaseAlpha;

	for (lowerCaseAlpha = 'a'; lowerCaseAlpha <= 'z'; lowerCaseAlpha++)

	{
		_putchar(lowerCaseAlpha);
	}

	_putchar('\n');

}
