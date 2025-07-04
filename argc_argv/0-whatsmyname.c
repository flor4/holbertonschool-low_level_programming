#include <stdio.h>


/**
 * main - Prints the program's name.
 *
 * @argc: Argument count (not used).
 *
 * @argv: Array of argument strings.
 *
 * Return: Always 0.
 */



int main(int argc, char *argv[])
{
	(void)argc; /* ignore unused variable warning*/

	printf("%s\n", argv[0]);

	return (0);
}


