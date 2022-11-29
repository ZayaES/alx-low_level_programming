#include "lists.h"

/**
 * print_list - prints elements of a list
 * @h: the start point
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
