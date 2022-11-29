 #include "lists.h"

/**
 * delete_nodeint_at_index - puts a node at any point in a list
 * @head: beginning of the list
 * @index: index , indicates the point to place newnode
 * Return: address of newnode if successful, NULL if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *idxnode;
	listint_t *somenode;

	idxnode = *head;
	if (index == 0)
	{
		if ((*head)->next != NULL)
		{
			somenode = (*head)->next;
			free(*head);
			*head = somenode;

			return (1);
		}
		else
		{
			free(*head);
		
			return (1);
		}
	}
	for (i = 0; i < index - 1; i++)
	{
		if (idxnode != NULL)
		{
			idxnode = idxnode->next;
		}
		else
		{
			i = index - 1;
		}
	}
	somenode = idxnode->next;
	idxnode->next = idxnode->next->next;
	if (somenode == NULL)
		return (-1);
	free(somenode);

	return (1);
}
