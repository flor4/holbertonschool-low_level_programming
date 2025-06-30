#include "main.h"

/**
 * *_memcpy - Write a function that copies memory area.
 *
 * @dest: to memory area -destination of.
 *
 * @src: from memory area -source.
 *
 * @n: n byte to copy.
 *
 * Return: the n copy in dest.
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)


{
	unsigned int i = 0;

	while (i < n)

	{
		dest[i] = src[i];

		i++;
	}

	return (dest);
}
