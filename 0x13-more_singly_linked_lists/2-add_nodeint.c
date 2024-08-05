#include "lists.h"

/**
* add_nodeint - a function that adds a new node at the
* beginning of a linked list
* @head: a pointer to a pointer to the head of the LL
* @n: the integer to be added as data of the LL
*
* Return: pointer to updated linked list
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* a pointer to a new_node of type LL */
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->next = *head;
	new_node->n = n;
	*head = new_node;

	return (*head);
}
