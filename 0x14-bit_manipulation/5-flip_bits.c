#include "main.h"

/**
* flip_bits - a function that returns the number of bits
* you would need to flip to get one number to another
* @n: the number that will be analyzed
* @m: the number that m will be fliped to
*
* Return: the number of bits needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	/* variable calculated ad result of XOR btw n and m */
	unsigned long int _xor = n ^ m, bits = 0;

	while (_xor > 0)
	{
		bits += (_xor & 1);
		_xor >>= 1;
	}

	return (bits);
}
