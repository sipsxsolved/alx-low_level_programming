#include <stdlib.h>

/**
* _strdup - function name
* @str: string
*
* Description: a function that returns a pointer to
* a string duplicate
* Return: NULL if str=NULL, if insufficient mem, return NULL
* otherwise return pointer
*/

char *_strdup(char *str)
{
	int i, j = 0, len = 0;
	char *duplicate;


	if (str == NULL)
	{
		return ('\0');
	}

	for (i = 0; str[i] != '\0'; i++)
	{
	len++;
	}
	duplicate =  malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
	return (NULL);

	while (j < len)
	{
		duplicate[j] = str[j];
		j++;
	}

	duplicate[j++] = '\0';

	return (duplicate);
}
