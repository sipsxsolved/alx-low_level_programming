#include "lists.h"
/**
* print_list - a function that prints the elements of a
* singly linked list
* @h: pointer to the head of a linked list
*
* Return: the number of nodes
*/

size_t print_list(const list_t *h)
{
	int count = 0;


	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;
	}
	return (count);
}
