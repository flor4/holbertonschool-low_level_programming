#include "main.h"



/**
 * *_strncpy - copy a string.
 *
 * @dest: destination.
 *
 *  @src: source.
 *
 * @n: number.
 *
 * Return: 0
 *
 */

char *_strncpy(char *dest, char *src, int n)

{
int i = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i++] = '\0';
	}

	return (dest);
}
