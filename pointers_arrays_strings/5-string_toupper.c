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


	for (i = 0; i <= str[i]; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;

		else if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;

	}
	return (str);
}
