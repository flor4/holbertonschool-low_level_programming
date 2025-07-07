#include "main.h"

/**
 * *_strdup - Write a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string of.
 *
 * Return: NULL if str = NULL.
 *
 * On success, the _strdup function returns
 * a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available.
 *
 */


char *_strdup(char *str)


{
	unsigned int i = 0;
	char *array;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)

		array = malloc((i + 1) * sizeof(char));

			if (array == NULL)
			{
				return (NULL);
			}

	for (i = 0; str[i] != '\0'; i++)

		array[i] = str[i];

	array[i] = '\0';

	return (array);
}
