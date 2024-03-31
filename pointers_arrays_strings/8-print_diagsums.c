#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - The function adds 2 diagonals of a square matrix and prints.
 * @a: the pointer to a matrix.
 * @size: the matrix size.
 *
 */

void print_diagsums(int *a, int size)
{
	int index;
	int suma1 = 0, suma2 = 0;

	for (index = 0; index < size; index++)
	{
		suma1 += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		suma2 += a[index];
		a -= size;
	}

	printf("%d, %d\n", suma1, suma2);
}
