#include "lists.h"

/**
* delete_nodeint_at_index - a function that deletes a node at an index
* @index: index of the node that should be deleted
* @head: the address of a pointer to the head of the LL
*
* Return: 1 if succeeded, otherwise -1
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *next;

	if ((*head) == NULL)
		return (-1);

	temp = *head;

	if (index == 0)
	{
		if ((*head)->next != NULL)
			(*head) = (*head)->next;
		else
			(*head) = NULL;
		free(temp);
		return (1);
	}
	while (index != 1)
	{
		if (temp->next == NULL)
			return (-1);

		temp = temp->next;
		--index;
	}
	next = temp->next;
	if (temp->next->next)
		temp->next = temp->next->next;
	else
		temp->next = NULL;
	free(next);
	return (1);
}
