#include "main.h"

/**
* set_bit - a function that sets the value of a bit to 1
* @n: number to be altered
* @index: the index at which the bit should be altered
* Return: (1) for success
* (-1) failure
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
