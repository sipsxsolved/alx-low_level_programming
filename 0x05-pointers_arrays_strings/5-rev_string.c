/**
* rev_string - function name
* @s: string
*
* Description: a function that reverses a string
* Return: void
*/

void rev_string(char *s)
{
	int length = 0, i = 0;
	char temp;

	while (s[i++])
	{
		length++;
	}

	for (i = length - 1; i >= length / 2; i--)
	{
		temp = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = temp;
	}
}
