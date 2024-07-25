#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);


/**
* print_all - function name
* @format: list of types of all args passed to the function
*
* Description: a function that prints any and everything
* passed to it
* Return: void
*/

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator =  "";
	fmt mapper[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"f", print_float}
	};

	va_start(args, format);

	while (format && *(format + i))
	{
		j = 0;

		while (j < 4 && *(format + i) != *(mapper[j].identifier))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			mapper[j].print(args);
			separator = ", ";
		}

		i++;

	}
	printf("\n");

	va_end(args);
}


/**
* print_char - function name
* @arg: pointer to the char to be printed
*
* Description: a function that prints a charater
* Return: void
*/
void print_char(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
* print_int - function name
* @arg: pointer to the int to be printed
*
* Description: a function that prints an int
* Return: void
*/

void print_int(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}


/**
* print_string - function name
* @arg: a pointer to the string to be printed
*
* Description: a function that prints a string
* Return: void
*/

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char*);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}


/**
* print_float - function name
* @arg: pointer to float to be printed
*
* Description: a function that prints a float
* Return: void
*/

void print_float(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}
