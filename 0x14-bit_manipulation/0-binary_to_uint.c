#include "main.h"

/**
* binary_to_uint - a function that converts binary
* to an unsigned int
* @b: a binary string
*
* Return: the integer equivalent of the binary or,
* 0 if b is null,
* 0 if there is a character in the string that is not 0 or 1
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i;

	/* make  sure b is not a null pointer */
	if (b == NULL)
		return (0);

	/* loop through the characters of the string b */
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] == '1')
			 /*left-shift the result by 1 (i.e multiply by 2) and set the lsb to 1 */
			result = (result << 1) | 1;

		else if (b[i] == '0')
			/* left-shift the result by 1 */
			result = result << 1;
		/* if the char is neither 0 nor 1) */
		else
			return (0);
	}
	return (result);
}
