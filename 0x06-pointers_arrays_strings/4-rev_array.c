/**
* reverse_array - function name
* @a: array address
* @n: len of arr
* Description: a function that reverses elements of array
* Return: void
*/

void reverse_array(int *a, int n)
{
	int temp, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
