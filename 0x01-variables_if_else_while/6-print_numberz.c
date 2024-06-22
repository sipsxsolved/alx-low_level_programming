#include <stdio.h>

/**
 * main - printing numbers
 * Return: Always 0.
 */
int main(void)
{
	int myNum;

	myNum = 0;
	while (myNum < 10)
	{
		putchar(myNum + '0');
		myNum++;
	}
	putchar('\n');
	return (0);
}
