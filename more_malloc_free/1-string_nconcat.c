#include "main.h"

/**
 * *string_nconcat - concatenate two strings.
 *
 * @s1: string to.
 * @s2: string to.
 * @n: number of.
 *
 * Return: NULL if fail.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_s1, len_s2, copy_len_s2, total_size;
	char *new_string;

	len_s1 = (s1 == NULL) ? 0 : strlen(s1);
	len_s2 = (s2 == NULL) ? 0 : strlen(s2);
	copy_len_s2 = (n >= len_s2) ? len_s2 : n;

	total_size = len_s1 + copy_len_s2 + 1;
	new_string = malloc(total_size);
	if (new_string == NULL)
		return (NULL);

	for (i = 0; i < len_s1; i++)
		new_string[i] = s1[i];

	for (j = 0; j < copy_len_s2; j++)
		new_string[i + j] = s2[j];

	new_string[i + j] = '\0';

	return (new_string);
}
