#include "lists.h"

/**
 *
 *
 *
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *tmp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	if (*h == NULL && idx == 0)
	{
		*h = new;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}

	tmp = *h;
	for (; idx != 0 && tmp != NULL; idx--)
	{
		tmp = tmp->next;
	}

	if (idx != 0)
	{
		free(new);
		return (NULL);
	}

	if (tmp == NULL)
	{
		tmp = *h;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new;
		new->prev = tmp;
	}
	else
	{
		if (tmp->prev == NULL)
		{
			*h = new;
		}
		else
		{
			tmp->prev->next = new;
		}
		new->prev = tmp->prev;
		new->next = tmp;
		tmp->prev = new;
	}

	return (new);
}
