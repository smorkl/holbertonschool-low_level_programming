#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - the function  prints all natural numbers from n to 98
 * @n: number
 *
 */

void print_to_98(int n)
{
	if (n <= 99)
	{
		printf("%d, ", n);

		while (n < 97)
		{
			int numero;

			numero = n + 1;
			printf("%d, ", numero);
			n++;
		}
	}
	else if (n != 98)
	{
		printf("%d, ", n);

		while (n > 99)
		{
			int numero;

			numero = n - 1;
			printf("%d, ", numero);
			n--;
		}
	}
	printf("98\n");
}
