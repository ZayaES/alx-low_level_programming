#include "lists.h"

/**
 * sum_listint - fimds the su of the data in a list
 * @head: beginning
 * Return: sum of the data n of the list
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *lastnode;

	lastnode = head;
	sum = 0;
	while (lastnode != NULL)
	{
		sum = sum + lastnode->n;
		lastnode = lastnode->next;
	}
	return (sum);
}
