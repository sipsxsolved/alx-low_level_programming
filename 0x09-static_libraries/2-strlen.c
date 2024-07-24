/**
 * _strlen - function name
 * @s: string to work with
 *
 * Description: a function that returns the length of a str
 * Return: length of string int
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s)
	{
		i++;
		s++;
	}
	return (i);

}
