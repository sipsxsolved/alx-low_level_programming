#include <stdio.h>
#include <stdlib.h>

/**
* malloc_checked - function name
* @b: size  of memory
*
* Description: a function that allocates memory using malloc
* Return: pointer to allocated mem
*/

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
