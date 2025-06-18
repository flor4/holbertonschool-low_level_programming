#include <stdio.h>


/**
 * main - program that prints the lowercase alphabet in reverse
 *
 * Return: 0
 */


int main(void)

{
char lowerCaseAlphabetRev = 'z';

for (; lowerCaseAlphabetRev >= 'a'; lowerCaseAlphabetRev--)

{
putchar(lowerCaseAlphabetRev);
}

putchar('\n');
return (0);
}
