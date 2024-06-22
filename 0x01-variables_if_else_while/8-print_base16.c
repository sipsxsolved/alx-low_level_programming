#include <stdio.h>

/**
 * main - printing numbers base 16
 * Return: Always 0.
 */
int main(void)
{
	int myNum;
	char alph;

	myNum = 0;
	while (myNum < 10)
	{
		putchar(myNum + '0');
		myNum++;
	}
	for (alph = 'a'; alph <= 'f'; alph++)
		putchar(alph);
	putchar('\n');
	return (0);
}
