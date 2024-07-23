#include "main.h"

/**
* _print_rev_recursion - function name
* @s: string
*
* Description: a function that prints string in rev
* Return: void
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
