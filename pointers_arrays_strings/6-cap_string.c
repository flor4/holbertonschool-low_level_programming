#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 *
 * @str: string.
 *
 * Return: to the pointer c.
 *
 */

char *cap_string(char *str)
{
	int i = 0;
	char sep[] = " \t\n,;.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] -= 32;
	}

	while (str[i] != '\0')
	{
		int j = 0;

		while (sep[j] != '\0')
		{
			if (str[i] == sep[j] && (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			{
				str[i + 1] -= 32;
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
