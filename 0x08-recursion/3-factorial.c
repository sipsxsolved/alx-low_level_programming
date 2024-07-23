/**
* factorial - function name
* @n: number
*
* Description: a function that returns the factorial of a num
* Return: result of function
*/

int factorial(int n)
{
	if (n < 1)
	{
		return (-1);
	}
	if (n <= 1)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
