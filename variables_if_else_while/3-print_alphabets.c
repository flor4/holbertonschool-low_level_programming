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
char upperCaseAlphabet = 'A';

for (; lowerCaseAlphabet <= 'z'; lowerCaseAlphabet++)

{
putchar(lowerCaseAlphabet);
}

for (; upperCaseAlphabet <= 'Z'; upperCaseAlphabet++)

{
putchar(upperCaseAlphabet);
}

putchar('\n');
return (0);
}
