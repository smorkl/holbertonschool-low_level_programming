#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - the fuction count the number of elements.
 * @h: a pointer to the head.
 *
 * Return: returns the number of elements in the list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int cant_ele = 0;

	while (h)
	{
		cant_ele++;
		h = h->next;
	}

	return (cant_ele);
}
