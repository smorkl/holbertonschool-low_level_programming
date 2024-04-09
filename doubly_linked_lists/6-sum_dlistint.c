#include "lists.h"

/**
 * sum_dlistint - the function adds the integers of each node
 *                and gives the sum total
 * @head: the pointer to head of the list.
 *
 * Return: returns the total sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
