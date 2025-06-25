#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: string.
 *
 *
 */

void rev_string(char *s)


{
	int start = 0;
	int lenghtOf = 0;
	char temp;
	int end;

	while (s[lenghtOf] != '\0')
	{
		lenghtOf++;
	}

	end = lenghtOf - 1;

	while (start < end)

	{
		temp = s[start];
		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;

	}

}



