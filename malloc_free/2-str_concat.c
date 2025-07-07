#include "main.h"


/**
 * str_concat - Write a function that concatenates two strings.
 *
 * @s1: concatenate string1.
 *
 * @s2: concatenate string2.
 *
 * Return: the pointer of or NULL.
 *
 */


char *str_concat(char *s1, char *s2)

{

	int len1 = 0;
	int len2 = 0;
	int i, j;
	char *array;

	if (s1 == NULL && s2 == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
		for (i = 0; s1[i] != '\0'; i++)
			len1++;

	if (s2 != NULL)
		for (j = 0; s2[j] != '\0'; j++)
			len2++;

	array = malloc((len1 + len2 + 1) * sizeof(char));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		array[i] = s1[i];

	for (j = 0; j < len2; j++)

		array[len1 + j] = s2[j];

	array[len1 + len2] = '\0';

	return (array);


}
