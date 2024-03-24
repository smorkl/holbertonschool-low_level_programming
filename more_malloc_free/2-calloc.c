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
	char *filler;
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
	{
		return(NULL);
	}

	filler = ptr;

	for (index = 0; index < (size * nmemb); index++)
	{
		filler[index] = '\0';
	}

	return (ptr);
}
