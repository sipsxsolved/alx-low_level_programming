#include <stddef.h>

/**
* print_name - function name
* @name: the name to be printed
* @f: pointer to function that will be called
*
* Description: a function that prints a name
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
