#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - the fuction print all the element.
 * @h: a poonter to the head.
 *
 * Return: return number of the nodes.
 */

size_t print_dlistint(const dlistint_t *h)
{
	int cant_nodes = 0;

	while (h)
	{
		cant_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (cant_nodes);
}
