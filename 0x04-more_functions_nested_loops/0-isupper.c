#include "main.h"
#include <stdio.h>

/**
* _isupper - checks for uppercase character
* @c: The number to be checked
* Return: 1 if it's an uppercase or 0 for something else
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
