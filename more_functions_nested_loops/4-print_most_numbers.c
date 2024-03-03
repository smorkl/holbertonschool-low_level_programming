#include "main.h"

/**
 * print_most_numbers - this  function prints the numbers,
 *                      from 0 to 9, Do not print 2 and 4
 *
 */

void print_most_numbers(void)
{
	int numero;

	for (numero = 0; numero <= 9; numero++)
	{
		if (numero != 2 && numero != 4)
		{
			_putchar('0' + numero);
		}
	}
	_putchar('\n');
}
