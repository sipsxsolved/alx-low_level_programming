#include <stddef.h>

/**
* array_iterator - function name
* @array: array containing elements to be iterated
* @size: size of array
* @action: function
*
* Description: a function that executes a function given
* as param on each element of an array
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size > 0 && action)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
