#include "lists.h"

/**
* free_listint2 - a function that frees a linked list
* @head: address of a pointer to the head of the LL
*
* Return: 0 (success)
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
