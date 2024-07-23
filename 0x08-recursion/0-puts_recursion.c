#include "main.h"

/**
* _puts_recursion - function name
* @s: string to be printed
*
* Description: a function that prints a string
* Return: void
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(s[i]);
	i++;
	_puts_recursion(&s[i]);
}
