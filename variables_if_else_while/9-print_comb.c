#include <stdio.h>

/**
 * main - a program that prints all possible,
 * combinations of single-digit numbers.
 * Numbers must be separated by \",\", followed by a space
 * Numbers should be printed in ascending order
 *
 *
 * Return: 0
 *
 */

int main(void)

{
int singleDigit = 48;

while (singleDigit < 58)
{
	putchar(singleDigit);

if (singleDigit < 57)

{
	putchar(44);
	putchar(32);
}
singleDigit++;
}

{
	putchar('\n');
}

return (0);
}
