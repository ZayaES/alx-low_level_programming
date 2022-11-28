#include "lists.h"

/**
 * add_node_end - creates a neew nosde at the end of a list
 * @ead: pointer to pinter to the head node
 * @str: string to write to new node
 * Return: address to the new tail node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		list_t *lastnode;

		lastnode = *head;
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		lastnode->next = new_node;
	}
	return (new_node);
}
