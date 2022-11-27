#include "lists.h"

size_t print_list(const list_t *h)
{
	if (h != NULL)
	{
		printf("[%ud] %s", h->len, h->str);
		h = h->next;
	}
}
