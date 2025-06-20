#include <stdio.h>
#include "main.h"

/**
 * main - print alphabet
 *
 * Return: 0
 */

int main(void)

{
char lowerCaseAlpha;

for (lowerCaseAlpha = 'a'; lowerCaseAlpha <= 'z'; lowerCaseAlpha++)

{
_putchar(lowerCaseAlpha);
}

_putchar('\n');

return (0);
}
