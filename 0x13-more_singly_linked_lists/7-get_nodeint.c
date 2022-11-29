#include "lists.h"

/**
 * get_nodeint_at_index - gets a specified node in a list
 * @head: beginning node to start from
 * @index: the node from head
 * Return: the intended node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *nextnode;

	nextnode = head;
	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		nextnode = nextnode->next;
	}
	if (nextnode == NULL)
		return (NULL);
	return (nextnode);
}
