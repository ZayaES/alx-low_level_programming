#include "lists.h"

/**
 * free_list - frees entire allocation of a list
 * @head: head of list input
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *lastnode; 
	list_t *next;


	lastnode = head;
	while (lastnode != NULL)
	{
		next = lastnode->next;
		free(lastnode);
		lastnode = next;
	}
}
