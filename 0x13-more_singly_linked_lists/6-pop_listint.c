#include "lists.h"

/**
 * pop_listint - frees the head of a list
 * @head: head to be freed
 * Return: int data of head
 */

int pop_listint(listint_t **head)
{
	int data;

	if (*head = NULL)
		return (0);
	data = ((*head)->n);
	listint_t *nextnode;

	nextnode = (*head)->next;
	free(*head);
	*head = nextnode;

	return (data);
}
