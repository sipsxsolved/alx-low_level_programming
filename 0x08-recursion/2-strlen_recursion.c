/**
* _strlen_recursion - function name
* @s: string
*
* Description: a function that returns the length of str
* Return: length of str
*/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
