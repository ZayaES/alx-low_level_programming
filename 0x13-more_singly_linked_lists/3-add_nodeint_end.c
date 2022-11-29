#include "lists.h"

/**
 * add_nodeint_end - creates a neew nosde at the end of a list
 * @head: pointer to pinter to the head node
 * @n: string to write to new node
 * Return: address to the new tail node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		listint_t *lastnode;

		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = new_node;
	}
	return (new_node);
}
