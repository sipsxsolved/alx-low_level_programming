#include <stdarg.h>
#include <stdio.h>

/**
* print_numbers - function name
* @n: numberof ints passed to the function
* @separator: string to be printed btw numbers
*
* Description: a function that prints numbers passed into it
* Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < (n); i++)
	{
		printf("%d", va_arg(args, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);

}
