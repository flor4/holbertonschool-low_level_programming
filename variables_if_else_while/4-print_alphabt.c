#include <stdio.h>

/**
 * main - Program an alphabet in lowercase
 *
 * Return: 0
 *
 */

int main(void)

{

char alphaExceptSome = 'a';

for (; alphaExceptSome <= 'z'; alphaExceptSome++)

{
if (alphaExceptSome == 'q' || alphaExceptSome == 'e')
{
continue;
}

else
{
putchar(alphaExceptSome);
}

}

putchar('\n');

return (0);
}
