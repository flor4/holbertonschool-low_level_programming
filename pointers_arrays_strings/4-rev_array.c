#include "main.h"


/**
 * reverse_array - Write a function that reverses
 * the content of an array of integers.
 *
 * @a: array.
 *
 * @n: is the number of elements of the array.
 *
 * Return: 0
 *
 */

void reverse_array(int *a, int n)


{
	int left = 0;
	int right = n - 1;
	int temp;

	while (left < right)
	{
		temp = a[left];
		a[left] = a[right];
		a[right] = temp;


	left++;
	right--;
	}
}

