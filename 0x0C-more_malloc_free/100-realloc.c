#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function name
 * @ptr: ptr to prev. allocated memoroy
 * @old_size: size of allocated space for ptr
 * @new_size: size of new memory block
 *
 * Return: pointer (success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr1;
	char *buff;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr1 = ptr;
	mem = malloc(sizeof(*ptr1) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	buff = mem;

	for (i = 0; i < old_size && i < new_size; i++)
		buff[i] = *ptr1++;

	free(ptr);
	return (mem);
}
