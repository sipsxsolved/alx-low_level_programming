#include <stdio.h>

/**
 * main - printing numbers that are singe digit only
 * Return: Always 0.
 */
int main(void)
{
	int myNum;

	myNum = 0;
	while (myNum < 10)
	{
		putchar(myNum + '0');
		if (myNum == 9)
		{
			;
		}
		else
		{
			putchar(',');
			putchar(' ');
		}
		myNum++;
	}
	putchar('\n');
	return (0);
}
