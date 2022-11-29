 #include "lists.h"

/**
 * insert_nodeint_at_index - puts a node at any point in a list
 * @head: beginning of the list
 * @idx: index , indicates the point to place newnode
 * @n: data of newnode
 * Return: address of newnode if successful, NULL if fail
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newnode, *idxnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	idxnode = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (idxnode != NULL)
		{
			idxnode = idxnode->next;
		}
		else
		{
			i = idx - 2;
		}
	}
	if (idxnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = idxnode->next;
	idxnode->next = newnode;

	return (newnode);
}
