#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a doubly linked list
 * @h: head of the linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
