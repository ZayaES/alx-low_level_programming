#include "lists.h"

/**
 * add_node - creates a neew nosde at the beginning of a list
 * @head: pointer to pinter to replace the head node
 * @str: string to wrote to new node
 * Return: address to the new head node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
