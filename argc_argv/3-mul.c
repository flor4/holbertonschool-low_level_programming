#include <stdio.h>

#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 *
 * @argc: Number of.
 *
 * @argv: Array of arguments
 *
 * Return: 0 if sucessed, 1 if not.
 *
 */

int main(int argc, char *argv[])


{
	int num1, num2, result;

	if (argc != 3)

	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

