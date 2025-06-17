#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Program that will assign a random number
 * to the variable n each time it is executed.
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastDigitOf = n % 10;

	printf("last digit of %d is", n);

	if (lastDigitOf > 5)
	{
	printf("%d and is greater than 5\n", lastDigitOf);
	}
	if else(lastDigitOf == 0)
	{
	printf("%d and is 0\n", lastDigitOf);
	}
	else
	{
	printf("%d and is less than 6 and not 0\n", lastDigitOf);
	}

	return (0);
}
