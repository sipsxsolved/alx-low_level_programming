#include <stdio.h>

/**
 * swap_int - name of the function
 * @a: first value to be swapped
 * @b: second value to be swapped
 *
 * Description: a function that swaps the values of a and b
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
