#include "lists.h"

/**
* sum_listint - a function that sums all the data of a linked list
* @head: a pointer to the head of the LL
*
* Return: sum of all the data (n)
*/

int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
