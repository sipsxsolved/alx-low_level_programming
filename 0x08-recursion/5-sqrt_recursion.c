#include "main.h"

/**
* _sqrt_helper - fucntion name
* @n: number
* @i: index
*
* Description: a function that calculates natural sqrt
* Return: result
*/

int _sqrt_helper(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}

	return (_sqrt_helper(n, i + 1));
}

/**
* _sqrt_recursion - function name
* @n: number..
*
* Description: a function that recursively returns nsqrt
* Return: result
*/

int _sqrt_recursion(int n)
{
	return  (_sqrt_helper(n, 1));
}
