#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - the function  prints all natural numbers from n to 98
 * @n: number
 *
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		printf("%d, ", n);
		int numero;

		while (n < 98)
		{
			numero = n + 1;
			printf("%d, ", numero);
			n++;
		}
	}
	else
	{
		printf("%d, ", n);

		int numero;

		while (n > 98)
		{
			numero = n - 1;
			printf("%d, ", numero);
			n--;
		}
	}
	printf("98\n");
}
