#include "main.h"

/**
 * *_strcpy - Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * Return value: the pointer to dest
 *
 * @dest: pointer dest. Franck est passé par la!
 *
 * @src: source.
 *
 * Return: 0
 *
 */


char *_strcpy(char *dest, char *src)




/*bisous*/

{
	int copyChar = 0;

	while (src[copyChar] != '\0')
	{
		dest[copyChar] = src[copyChar];

		copyChar++;

	}

	dest[copyChar] = '\0';


return (dest);

}

