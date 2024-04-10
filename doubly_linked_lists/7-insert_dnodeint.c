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
	dlistint_t *new, *tmp = *h;

	if (idx != 0)
	{
		for (; idx != 0 && tmp != NULL; idx--)
			tmp = tmp->next;

		if (tmp == NULL && idx != 0)
			return (NULL);
		tmp = tmp->prev;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (tmp == NULL)
	{
		if (*h != NULL)
		{
			new->next = *h;
			(*h)->prev = new;
		}
		*h = new;
	}
	else
	{
		new->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = new;
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
