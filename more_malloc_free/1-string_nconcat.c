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
	char *result;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	if (n > len2)
		n = len2;

	result = malloc(len1 + n + 1);
	if (!result)
		return (NULL);

	for (; i < len1; i++)
		result[i] = s1[i];
	for (; j < n; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';
	return (result);
}
