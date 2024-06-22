#include <stdio.h>

/**
 * main - print the alphabet in lowercase then uppercase.
 * Return: 0.
 */
int main(void)
{
	char alph;

	for (alph = 'z'; alph >= 'a'; alph--)
		putchar(alph);
	putchar('\n');
	return (0);
}
