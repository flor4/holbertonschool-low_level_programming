#include <stdio.h>


/**
 * main - Write a program that prints all arguments it receives.
 *
 * @argc: number of.
 *
 * @argv: the array of arguments.
 *
 * Return: always 0.
 *
 */

int main(int argc, char *argv[])

{
	int i = 0;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
