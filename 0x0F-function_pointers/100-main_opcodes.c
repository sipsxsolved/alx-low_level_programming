#include <stdio.h>
#include <stdlib.h>

/**
 * main - function name
 * @argc: argument count
 * @argv: array of args
 *
 * Description: a program that prints the opcodes of its
 * own main function
 * Return: success (0);
 */
int main(int argc, char *argv[])
{
	int number_of_bytes, i;
	int (*add)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < number_of_bytes; i++)
	{
		opcode = *(unsigned char *)add;
		printf("%.2x", opcode);

		if (i == number_of_bytes - 1)
			continue;
		printf(" ");

		add++;
	}

	printf("\n");

	return (0);
}
