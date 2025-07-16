#include "3-calc.h"

/**
 * main - Write a program that performs simple operations.
 *
 * @argc: number of arguments.
 * @argv: arguments enter by the user.
 *
 * Return: 0;
 */

int main(int argc, char *argv[])
{
	int (*f)(int, int);
	int num1, num2;
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = f(num1, num2);

	printf("%i\n", result);

	return (0);
}
