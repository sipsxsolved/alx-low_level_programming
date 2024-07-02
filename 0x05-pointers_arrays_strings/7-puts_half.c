#include "main.h"

/**
* puts_half - function name
* @str: string
*
* Description: a function that prints half of a string
* Return: Void
*/

void puts_half(char *str)
{
	int length = 0;

	while (*str)
	{
		length++;
		str++;
	}
	str -= length / 2;

	for (length = length / 2; length > 0; length--)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
