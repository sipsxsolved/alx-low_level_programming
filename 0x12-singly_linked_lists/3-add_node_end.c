#include "lists.h"

/**
* add_node_end - a function that adds a node to
* the end of a linked list
* @head: an address to a pointer to the head of a linked list
* @str: a string to be added to the new node
*
* Return: address of new element
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	int len = 0;

	newnode = malloc(sizeof(list_t));
	if (!newnode)
		return (NULL);

	while (str[len])
		len++;

	newnode->next = NULL;
	newnode->str = strdup(str);
	newnode->len = len;

	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;

		while (temp->next != NULL)
			temp = temp->next;

	temp->next = newnode;
	}

	return (newnode);
}
