#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint_end - the fuctionn add new node at the end of a dlistint_t list.
 * @head: A pointer to the address of the
 *        head of the listint_t list.
 * @n: the int of the list
 *
 * Return: if the fuction fail return NULL else
 *         return andress of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}

	return (*head);
}
