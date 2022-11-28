#include "lists.h"

/**
 * free_list - frees entire allocation of a list
 * @head: head of list input
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *lastnode; 

	while (head != NULL)
	{
		lastnode = head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		free(lastnode);
	}
}
