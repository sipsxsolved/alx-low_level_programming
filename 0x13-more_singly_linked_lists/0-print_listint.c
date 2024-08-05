#include "lists.h"

/**
* print_listint - a function that prints all elements in a
* linked list
* @h: a pointer to the head of a linked list
*
* Return: the number of nodes in the linked list
*/

size_t print_listint(const listint_t *h)
{
	/*temp is a temporary ponter that will be used to traverse LL*/
	const listint_t *temp;
	size_t count = 0;

	/*let temp point to the head*/
	temp = h;

	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		/*let temp point to the next node*/
		temp = temp->next;
		count++;
	}
	return (count);
}
