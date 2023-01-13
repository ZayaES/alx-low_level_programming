#include "lists.h"

/**
 * get_dnodeint_at_index - Nth node
 * @head: pointer to head node
 * @index: int
 * Return: dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *ith_node;

	ith_node = head;
	if (head == NULL)
	{
		return (NULL);
	}

	while (ith_node != NULL)
	{
		if (count == index)
		{
			return (ith_node);
		}
		count++;
		ith_node = ith_node->next;
	}
	return (NULL);
}
