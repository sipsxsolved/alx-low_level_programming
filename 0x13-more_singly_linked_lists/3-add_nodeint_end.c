#include "lists.h"

/**
* add_nodeint_end - a function that adds a node to the end
* of a linked list
* @n: integer to be added to data part of LL
* @head: a pointer to a pointer to a LL
*
* Return: pointer to the resulting LL
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* pointers to new_node and a temp to traverse LL */
	listint_t *new_node, *temp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = new_node;
	}

	return (*head);
}
