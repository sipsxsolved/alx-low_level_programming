#include "lists.h"

/**
* get_nodeint_at_index - a function gets the nth node of a linked list
* @head: a pointer to the head of the linked list
* @index: index of the node to be found
*
* Return: a pointer to the nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned  int i;
	listint_t *temp;

	if (head == NULL)
		return (NULL);

	temp = head;

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}
	return (temp);
}
