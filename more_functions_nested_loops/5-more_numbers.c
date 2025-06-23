#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers,
 * from 0 to 14
 *
 * Return: 0
 *
 */

void more_numbers(void)


{
	int count, moreNumbers;

	for (count = 0; count <= 9; count++)
	{
		for (moreNumbers = 0; moreNumbers < 15; moreNumbers++)
		{
			if (moreNumbers >= 10)

			{
				_putchar((moreNumbers / 10) + '0');
			}


			_putchar((moreNumbers % 10) + '0');

		}

			_putchar('\n');
	}
}
