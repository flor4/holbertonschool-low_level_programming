#include "main.h"


/**
 **_strchr - Write a function that locates a character in a string.
 *
 * @s: the string we looking at.
 *
 * @c: the character to locates.
 *
 * Return: 0
 *
 */


char *_strchr(char *s, char c)


{
int i = 0;

	while (s[i])
	{
		if (s[i] == c)

			return (s);
		s++;
	}
	if (s[i] == c)
		return (s);

	return ('\0');

}
