#include "variadic_functions.h"


/**
 * print_char - print a char.
 *@args: one of the argument in format.
 *
 * Return: 0.
 *
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_int - print an integer.
 * @args: one of the argument in format.
 *
 * Return: 0.
 *
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - print a float.
 * @args: one of the argument in format.
 *
 * Return: 0
 *
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - print a string.
 *
 * @args: one of the argument in format.
 *
 * Return: nil if Null.
 *
 */

void print_string(va_list args)
{
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


/**
 * print_all - Write a function that prints anything.
 *
 * @format: a list of types of arguments passed to the function.
 *
 * Return: nil if null.
 *
 */

void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	unsigned int j;
	va_list args;
	char *separator = "";
	char array[] = {'c', 'i', 'f', 's', '\0'};
	void (*f[])(va_list) = {print_char, print_int, print_float, print_string};

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (array[j] != '\0')
		{
			if (format[i] == array[j])
			{
				printf("%s", separator);
				f[j](args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
