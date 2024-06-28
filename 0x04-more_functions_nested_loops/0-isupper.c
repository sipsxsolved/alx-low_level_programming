#include "main.h"

/**
* _isupper - checks for uppercase character
* @x: The number to be checked
* Return: 1 if it's an uppercase or 0 for something else
*/

int _isupper(int c)
{

	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
