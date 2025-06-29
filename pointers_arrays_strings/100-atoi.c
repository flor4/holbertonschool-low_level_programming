#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer.
 * The number in the string can be preceded by an infinite number of characters
 * You need to take into account all the - and + signs before the number
 * If there are no numbers in the string, the function must return 0
 * You are not allowed to use long
 * You are not allowed to declare new variables of “type” array
 * You are not allowed to hard-code special values
 *
 * @s: string.
 *
 * Return: 0
 *
 */

int _atoi(char *s)


{
	unsigned int res = 0;
	int i, sign = 1;
	int start = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
		{
			sign *= -1;
		}


		else if (s[i] >= '0' && s[i] <= '9')
		{
			start = 1;

			res = res * 10 + s[i] - '0';
		}


		else if (start)
		{
			break;
		}
	}
	return (res * sign);

}
