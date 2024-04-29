#include "main.h"
#include <stdio.h>

/**
 * print_array - the fuction print the number followed by a comma
 * @a: array
 * @n: the number of elements of the array
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
