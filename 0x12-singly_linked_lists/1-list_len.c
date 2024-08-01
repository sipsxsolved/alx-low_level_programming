#include "lists.h"

/**
* list_len - a function that returns number of elemets in
* a linked list
* @h: pointer to the head of a linked list
*
* Return: length of linked list
*/

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
