#include "main.h"

/**
 * **alloc_grid - Write a function that returns a
 * pointer to a 2 dimensional array of integers.
 *
 * @width: largueur.
 * @height: longueur.
 *
 * Return: Null on failure.
 *
 */


int **alloc_grid(int width, int height)
{
	int row, column;
	int **tobby;

	if (width < 1 || height < 1)
		return (NULL);
	tobby = malloc(height * sizeof(int *));
	if (tobby == NULL)
		return (NULL);
	for (row = 0; row < height; row++)
	{
		tobby[row] = malloc(height * sizeof(int *));
		if (tobby[row] == NULL)
		{
			for (column = 0; column < row; column++)
				free(tobby[row]);
			free(tobby);
			return (NULL);
		}
		for (column = 0; column < width; column++)
			tobby[row][column] = 0;
	}
	return (tobby);
}
