#include "main.h"

/**
 * print_line - This function prints the character in quantity \.
 * @n: number
 *
 */

void print_diagonal(int n)
{
	int contador = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
    }
	while (contador < n)
	{
		int espacio = 0;

		while (contador < espacio)
		{
			_putchar(' ');
			espacio++;
		}

		_putchar('\\');
		_putchar('\n');
	}
}
