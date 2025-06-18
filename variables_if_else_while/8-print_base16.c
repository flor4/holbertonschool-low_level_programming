#include <stdio.h>

/**
 * main - program that prints all the numbers of base 16
 * in lowercase
 *
 * Return: 0
 *
 */

int main(void)

{
char baseSixteenDigit = 48;
char baseSixteenAlpha = 97;

for (; baseSixteenDigit <= 57; baseSixteenDigit++)
{
putchar(baseSixteenDigit);
}

for (; baseSixteenAlpha <= 102; baseSixteenAlpha++)
{
putchar(baseSixteenAlpha);
}

{
putchar('\n');
}

return (0);
}
