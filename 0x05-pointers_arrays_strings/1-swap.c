#include <stdio.h>

/**
 * swap_int - swaps the value of two integers
 * @a - first value to be swapped
 * @b - second value to be swapped
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
