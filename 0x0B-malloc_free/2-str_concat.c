#include "main.h"
#include <stdlib.h>

/**
 * _strlen - function name
 * @str: string
 *
 * Description: a helper function to find len of str
 * Return: returns length of sting
 */

int _strlen(char *str)
{
	int len = 0;

	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}

/**
 * str_concat - function name
 * @s1: string1
 * @s2: string2
 *
 * Description: a function that concatenates two strings
 * Return: NULL for empty string, failure
 * on success, a pointer of new string should be returnred
 */

char *str_concat(char *s1, char *s2)
{
	int str1, str2, n, i = 0;
	char *s3;

	if (s1 == NULL)
	{
		str1 =  0;
	}
	else
	{
		str1 = _strlen(s1);
	}
	if (s2 == NULL)
	{
		str2 = 0;
	}
	else
	{
		str2 = _strlen(s2);
	}
	s3  =  malloc(sizeof(char) * (str1 + str2 + 1));

	if (s3 == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < str1; n++, i++)
	{
		s3[i] = s1[n];
	}
	for (n = 0; n < str2; n++, i++)
	{
		s3[i] = s2[n];
	}

	s3[i] = '\0';
	return (s3);
}
