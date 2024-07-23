#include <stdlib.h>

/**
 * _calloc - function name
* @nmemb: number of elements
* @size: size of bytes
*
* Description: a function that allocates mem for arr
* Return: pointer to allocated mem (sccess)
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	unsigned int i;
	char *buff;

	if (size == 0 || nmemb == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	buff = memory;

	for (i = 0; i < (size * nmemb); i++)
		buff[i] = '\0';

	return (memory);
}
