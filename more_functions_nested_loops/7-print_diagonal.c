#include "main.h"

/**
 * print_diagonal - This function that draws a diagonal line on the terminal
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

	for (contador = 0; contador < n; espacio++)
	{
		for (espacio = 0; espacio < contador; espacio++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
