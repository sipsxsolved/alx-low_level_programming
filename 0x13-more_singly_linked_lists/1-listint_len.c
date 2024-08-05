#include "lists.h"

/**
* listint_len - a function that returns the number  of nodes
* in a linked list
* @h: a pointer to the head of a LL
*
* Return: number of elements/nodes
*/

size_t listint_len(const listint_t *h)
{
	/* a temp pointer that will be used to traverse LL*/
	const listint_t *temp;
	size_t count = 0;

	/* let temp point to head at start*/
	temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}
