#include <stdarg.h>

/**
 * sum_them_all - function name
 * @n: function parameter
 *
 * Description: a function that returns the sum of all it's parameters
 * Return: sum of all parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	int result = 0;
	unsigned int arg, i;

	va_list args;

	va_start(args, n);

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			arg = va_arg(args, int);
			result += arg;
		}
		va_end(args);
	}

	return (result);
}
