/**
* _memset - function name
* @s: memory area
* @b: constant byte
* @n: number of bytes
*
* Description: a function that fills memory with a const byte
* Return: a pointer to the memory area
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
