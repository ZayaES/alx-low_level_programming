#include "lists.h"

/**
 * add_nodeint
 * @head: head pointer
 * @n: data
 * Return: address of new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return(newnode);
}
