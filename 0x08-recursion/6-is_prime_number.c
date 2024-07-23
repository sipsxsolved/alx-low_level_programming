/**
* is_prime_helper - function name
* @n: number to be checked
* @i: index
*
* Description: a helper function that checks if
* a number is prime
* Return: 1 if prime, 0 otherwise
*/

int is_prime_helper(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}

	if ((n / i) < i)
	{
		return (1);
	}

	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	return (is_prime_helper(n, i + 1));
}

/**
* is_prime_number - function name
* @n: number
*
* Description: a function that checks if a number is prime
* Return: 1 if true, 0 if false
*/

int is_prime_number(int n)
{
	return (is_prime_helper(n, 1));
}
