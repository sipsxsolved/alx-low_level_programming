#include <stdio.h>
#include <string.h>

/**
* main - function name
* @argc: arg count
* @argv: arg vector
*
* Description: a program that prints its name
* Return: 0 (success)
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);

	(void)argc;
	return (0);
}
