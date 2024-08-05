#include "lists.h"

/**
* pop_listint - a function that deletes the head node of a LL
* @head: the address of the pointer to the head
*
* Return: the data of the deleted head
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	n = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (n);
}
