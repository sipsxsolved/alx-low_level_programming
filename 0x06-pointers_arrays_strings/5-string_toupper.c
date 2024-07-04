/**
* string_toupper - function name
* @str: string to be checked
* Description: a function that converts lowercase to upper
* Return: address to resulting str
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
		i++;
	}
	return (str);
}
