#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * @head: head of the dlist
 * @n: Value
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *temp, *new = malloc(sizeof(dlistint_t));


	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
		return (*head);
	}
	temp = *head;
	new->next = temp;
	temp->prev = new;
	*head = new;
	return (new);
}
