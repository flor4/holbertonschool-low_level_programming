#include <stdio.h>

/**
 * main - Program an alphabet in lowercase
 *
 * Return: 0
 *
 */

int main(void)

{
char lowerCaseAlphabet = 'a';

for (; lowerCaseAlphabet <= 'z'; lowerCaseAlphabet++)

{
putchar(lowerCaseAlphabet);
}

putchar('\n');
return (0);
}
