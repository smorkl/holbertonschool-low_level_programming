#include "main.h"

/**
 * print_line - This function prints the character in quantity \.
 * @n: number
 *
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int contador = 0;

		while (contador < n-1 && n != 1)
		{
			_putchar(' ');
			contador++;
		}
		if (contador == n)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
