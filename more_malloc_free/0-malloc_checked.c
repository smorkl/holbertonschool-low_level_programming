#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - the function allocate memmory using malloc.
 * @b: a int
 *
 * Return: return a pointer but if the function fails return 98
 */

void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(b);

	if (str == NULL)
	{
		exit(98);
	}

	return (str);
}
