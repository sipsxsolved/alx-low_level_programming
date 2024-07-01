#include <stdio.h>

/**
 * _strlen - name of the function
 * @s: string to count from
 *
 * Description:funcion calculates the length of a string
 * Return: length of string int
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);
}
