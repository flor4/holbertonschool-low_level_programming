#include "main.h"

/**
 * *string_toupper - to lowercase to uppercase.
 *
 * @str: string.
 *
 * Return: 0
 *
 */

char *string_toupper(char *str)

{
	int i;


	for (i = 0; i < str[i] ; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;

		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;

	}
	return (str);
}
