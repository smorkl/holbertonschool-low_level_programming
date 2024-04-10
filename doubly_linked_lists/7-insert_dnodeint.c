#include "lists.h"

/**
 * insert_dnodeint_at_index - the fuctio adds a new
 *                            node at the desired position
 * @h:pointer to head pointer.
 * @idx: desired position.
 * @n: int del nuevo nodo
 * Return: return NULL if fail or new pointer of node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h, *new;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
	}

	if (tmp == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = tmp;
	new->next = tmp->next;
	if (tmp->next != NULL)
		tmp->next->prev = new;
	tmp->next = new;

	return (new);
}
