#include "main.h"

/**
* clear_bit - a function that sets the value of a bit to 0 at index
* @n: number to be altered
* @index: index at which number should be altered
*
* Return: (1) for success
* (-1) error
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	/* error handling: return (-1) if index is out of range */
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	/* use bitmask to clear bit at index */
	*n &= ~(1 << index);

	return (1);
}
