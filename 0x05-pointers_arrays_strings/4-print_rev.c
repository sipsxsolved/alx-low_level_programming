#include "main.h"

/**
* print_rev - function name
* @s: str
*
* Description: a function that prints string in reverse
* Return: void
*/

void print_rev(char *s)
{
	int i;

	i = 0;

	while (*s)
	{
		i++;
		s++;
	}
	s = s - i;

	for (i -= 1; i >= 0; i--)
	{
		_putchar(*(i + s));
	}
	_putchar('\n');
}
