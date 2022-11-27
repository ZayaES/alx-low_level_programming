#include "lists.h"

/**
 * list_len - counts no of elements
 * @h: start node
 * Return: no of elements
 */

size_t list_len(const list_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
