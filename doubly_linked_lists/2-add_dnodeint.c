#include "lists.h"
#include <stdio.h>

/**
 * add_dnodeint - the fuction add new node at the beginning
 *                of a dlistint_t list
 * @head: a pointer pointing to a pointer pointing to the head of the list.
 * @n: new int for the new node.
 *
 * Return: if the fuction fail return null else andress of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
