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
	int index = 0;
	int sepIndex;

	char separators[] = " \t\n,;.!?\"(){}"; /* '\t' is for tabulation*/


	if (str[0] >= 'a' && str[0] <= 'z')
	{
		str[0] = str[0] - 32;
	}

	while (str[index] != '\0')
	{
		for (sepIndex = 0; separators[sepIndex] != '\0'; sepIndex++)

			if (sepIndex == separators[sepIndex] &&
					str[index + 1] >= 'a' && str[index + 1] <= 'z')
			{
				str[index + 1] = str[index + 1] - 32;
				break;
			}
		index++;
	}
	return (str);

}



