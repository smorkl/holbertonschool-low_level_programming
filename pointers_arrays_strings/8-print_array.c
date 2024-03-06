#include "main.h"
#include <stdio.h>

/**
 * print_array - the fuction print the number followed by a comma
 * @a: array
 * @n: the number of elements of the array
 */

void print_array(int *a, int n)
{
	int contador = 0;

	while (contador < n)
	{
		if (contador < (n - 1))
		{
			printf("%d, ", a[contador]);
			contador++;
		}
		else
		{
			printf("%d", a[contador]);
			contador++;
		}
	}
	_putchar("\n");
}
