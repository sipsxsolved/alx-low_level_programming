/**
* int_index - function name
* @array: array of ints
* @size: size of array
* @cmp: pointer to function used to compare values
*
* Description: a function that searches for an int in an arr
* Return: index of first element that matches the int
* if no element matches, return -1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
