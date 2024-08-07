/**
* _strstr - function name
* @haystack: original string
* @needle: substring
*
* Description: a function that prints the alphabet
* Return: 0 (success)
*/

char *_strstr(char *haystack, char *needle)
{

	for (; *haystack != '\0'; haystack++)
	{
		char *temp;

		temp = haystack;
		while (*haystack == *needle && *needle != '\0')
		{
			haystack++;
			needle++;
		}
		if (*needle == '\0')
		{
			return (temp);
		}
	}
	return (0);
}
