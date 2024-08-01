#include "lists.h"

/**
* add_node - a function that adds a node at the
* beginning of a list
* @head: address of a pointer to the head of a linked list
* @str: string to be added in the linked list
*
* Return: a pointer to the new head of linked list
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		exit(98);
	newnode->next = *head;
	newnode->len = strlen(str);
	newnode->str = strdup(str);
	*head = newnode;

	return (*head);
}
