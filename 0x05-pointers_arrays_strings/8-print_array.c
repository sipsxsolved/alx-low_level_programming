#include <stdio.h>
#include "main.h"

/**
* print_array - function name
* @n: number of elements to be printed
* @a: array address
*
* Description: a function that prints n elements of an array
* Return: Void
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	_putchar('\n');
}
