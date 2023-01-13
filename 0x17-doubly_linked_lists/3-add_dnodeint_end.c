#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 * @head: head of the dlist
 * @n: data contained
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tail = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	new->prev = tail;
	tail->next = new;

	return (new);
}
