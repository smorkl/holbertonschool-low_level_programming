#include "main.h"

/**
 * print_line - This function prints the character in quantity -.
 * @n: number
 *
 */

void print_line(int n)
{
	int contador = 0;

	while (contador < n && n > 0)
	{
		_putchar('_');
		contador++;
	}
	_putchar('\n');
}
