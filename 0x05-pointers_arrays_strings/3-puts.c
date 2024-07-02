#include <stdio.h>

/**
 * _puts - name of the function
 * @str: string to be printed
 *
 * Description: a function that prints a string followed by
 * a new line.
 * Return: void
 */

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
