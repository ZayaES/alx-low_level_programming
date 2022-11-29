#include "lists.h"

/**
 * free_listint - frees entire allocation of a list
 * @head: head of list input
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *lastnode;
	listint_t *next;


	lastnode = head;
	while (lastnode != NULL)
	{
		next = lastnode->next;
		free(lastnode);
		lastnode = next;
	}
}
