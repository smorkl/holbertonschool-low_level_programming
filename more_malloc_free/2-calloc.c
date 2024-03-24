#include <stdlib.h>
#include "main.h"

/**
 * _calloc -
 * @nmemb:
 * @size:
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	if (size == sizeof(char))
	{
		char arr[nmemb];
		char *ptr;

		ptr = arr;
		ptr = malloc(sizeof(char) * nmemb);

		if (ptr == NULL)
		{
			return (NULL);
		}
	}

	if (size == sizeof(int))
	{
		int arr[nmemb];
		int *ptr;

		ptr = arr;
		ptr = malloc(sizeof(int) * nmemb);

		if (ptr == NULL)
		{
			return (NULL);
		}
	}

	return (ptr);
}
