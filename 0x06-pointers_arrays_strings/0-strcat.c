#include "main.h"

/**
 * _strcat - function that concatenates two strings
 * @dest: string add
 * @src: string add
 *
 * Description: two strings are put together through function
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest
