#include <stdio.h>
#include <stdlib.h>

/**
 * is_valid_int - checks validity of int
 * @s: str
 *
 * Return: 1 if error, otherwise 0
 */
int is_valid_int(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
			return (0);

		s++;
	}

	return (1);
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: array of command args
 *
 * Description: program that adds ints
 * Return: 0 if successful. 1 if error
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc < 2)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (is_valid_int(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);

	return (0);
}
