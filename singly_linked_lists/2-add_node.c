#include "lists.h"
#include <stdio.h>

/**
 * add_node - the fucntion add a node in lists_s.
 * @head: head of the lists_s.
 * @str: pointer to a string of chars.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)
{
	char *duplicar = strdup(str);
	int len;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}

	if (dup == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	new->str = duplicar;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
