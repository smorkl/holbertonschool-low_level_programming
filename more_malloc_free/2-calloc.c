#include <stdlib.h>
#include "main.h"

/**
 * _calloc - the fuction allocates memory for array.
 * @nmemb: the number of elements for an array.
 * @size: the number of bytes of array.
 *
 * Return: if malloc fails return NULL, else return the pointer to the array.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index;
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (size == sizeof(char))
	{
		char *arr;

		arr = malloc(sizeof(char) * nmemb);

		if (arr == NULL)
		{
			return (NULL);
		}
		ptr = arr;
	}
	else if (size == sizeof(int))
	{
		int *arr;

		arr = malloc(sizeof(int) * nmemb);

		if (arr == NULL)
		{
			return (NULL);
		}
		ptr = arr;
	}

	for (index = 0; index < (size * nmemb); index++)
	{
		filler[index] = '\0';
	}

	return (ptr);
}
