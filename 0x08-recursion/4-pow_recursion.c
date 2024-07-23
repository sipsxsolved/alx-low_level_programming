/**
* _pow_recursion - function name
* @x: first num
* @y: power
*
* Description: a function that returns the value of x^y
* Return: result of power op
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
