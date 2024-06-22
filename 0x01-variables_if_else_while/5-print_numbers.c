#include <stdio.h>

/**
 * main - print all single digit base 10 numbers from 0
 * Return: Always 0.
 */
int main(void)
{
	int myNum;

	myNum = 0;
	while (myNum < 10)
	{
		printf("%d", myNum);
		myNum++;
	}
	printf("\n");
	return (0);
}
