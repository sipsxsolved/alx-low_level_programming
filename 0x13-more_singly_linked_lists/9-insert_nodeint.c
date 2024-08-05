#include "lists.h"
/**
* insert_nodeint_at_index - a function that inserts a new node
* at a given index
* @head: the address of a pointer to the head of the linked list
* @idx: index at which the new node should be inserted
* @n: the data of the new node
*
* Return: a pointer to the resulting linked list
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;

	if (*head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		(*head) = new_node;
		return (new_node);
	}

	temp = (*head);
	for (; idx != 1; --idx)
	{
		temp = temp->next;
		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}
	new_node->next = temp->next;
	temp->next = new_node;

	return (new_node);
}
