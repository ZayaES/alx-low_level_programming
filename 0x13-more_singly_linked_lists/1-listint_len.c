#include "lists.h"

/**
 * listint_len - prints elements of a list
 * @h: the start point
 * Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
