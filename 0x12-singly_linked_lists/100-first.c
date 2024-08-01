#include "lists.h"

/**
* pre_main - a function that prints a message before main
* function is executed
*/

void pre_main(void)__attribute__((constructor));

void pre_main(void)
{
	printf("You're beat! and yet, you must allow,\nI bore "
			"my house upon my back!\n");
}
