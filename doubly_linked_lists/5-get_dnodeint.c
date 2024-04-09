#include "lists.h"

/**
 * get_dnodeint_at_index - The function finds the indicated node.
 * @head: the poonter to head of the list.
 * @index: the position of the node we want to find.
 *
 * Return: if head == NULL return NULL else return pointer return
 *         the pointer of the node we found
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
		{
			return (NULL);
		}

		head  = head->next;
	}

	return (head);
}
