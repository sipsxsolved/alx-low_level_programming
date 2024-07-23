#include <stdio.h>

/**
* main - entry point
* @argc: argument count
* @argv: argument vector
*
* Description: a program that prints number of args passed
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	(void)argv;
	return (0);
}
