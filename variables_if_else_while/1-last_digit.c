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
int lastDigitOf;

srand(time(0));
n = rand() - RAND_MAX / 2;

lastDigitOf = n % 10;

printf("Last digit of %d is ", n);
if (lastDigitOf > 5)
{
printf("%d and is greater than 5\n", lastDigitOf);
}
else if (lastDigitOf == 0)
{
printf("%d and is 0\n", lastDigitOf);
}
else
{
printf("%d and is less than 6 and not 0\n", lastDigitOf);
}

	return (0);
}
