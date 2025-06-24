#include "main.h"


/**
 * print_triangle - print a triangle.
 *
 * @size: print size.
 *
 * Return: 0
 *
 */

void print_triangle(int size)

{
	int line, space_count, hash_count;

	if (size <= 0)
	{
		_putchar ('\n');
	}
	else
	{
	for (line = 0; line < size; line++)
	{
		for (space_count = size - line; space_count > 1; space_count--)
		{
			_putchar (' ');
		}
		for (hash_count = 0; hash_count <= line; hash_count++)
		{
			_putchar('#');
		}
		_putchar ('\n');
	}
	}
}
