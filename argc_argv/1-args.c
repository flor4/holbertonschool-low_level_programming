#include <stdio.h>


/**
 * main - Write a program that prints
 * the number of arguments passed into it.
 *
 * @argc: Number of.
 *
 * @argv: Array of arguments.
 *
 * Return: always 0.
 *
 */



int main(int argc, char *argv[])
{
	(void)argv;

	printf("%i\n", argc - 1);

	return (0);
}
