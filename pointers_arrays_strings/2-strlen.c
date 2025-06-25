#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string.
 *
 * @s: string.
 *
 * Return: 0
 *
 */

int _strlen(char *s)

{

	int lenghtOfString = 0;

	while (s[lenghtOfString] != '\0')

	{
		lenghtOfString++;
	}

	return (lenghtOfString);
}
