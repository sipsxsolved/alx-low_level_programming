#include <stdlib.h>

/**
* array_range - function name
* @min: minimum element
* @max: max_element
*
* Description: a function that created an array of int
* Return: pointer to newly created array
*/

int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	arr = malloc(sizeof(int) * len);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		arr[i] = min++;

	return (arr);
}
