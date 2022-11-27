#include "lists.h"

size_t print_list(const list_t *h)
{
	int i = 0;
	while (h != NULL)
	{
		printf("[%ud] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
