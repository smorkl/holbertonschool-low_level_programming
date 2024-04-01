#include "lists.h"

/**
 * list_len - the function gives the number of nodes
 * @h: ...
 *
 * Return: the number of the elements.
 */

size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
