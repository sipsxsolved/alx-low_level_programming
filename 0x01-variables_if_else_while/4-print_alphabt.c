#include <stdio.h>

/**
 * main - print alphabet except q and e
 * Return: Always 0.
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		if (alph == 'q' || alph == 'e')
			;
		else
			putchar(alph);
	putchar('\n');
	return (0);
}
