#include <stdio.h>
#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet,
 * in lowercase
 *
 * Return: 0
 */


void print_alphabet_x10(void)

{
	int count;
	char print_alphabet;

	for (count = 0; count <= 9; count++)
	{
		for (print_alphabet = 'a'; print_alphabet <= 'z'; print_alphabet++)
		{
			_putchar(print_alphabet);
		}
		_putchar('\n');
	}
}
