#include "main.h"

/**
 * print_numbers - This code prints the numbers from 0 to 9.
 *
 */

void print_numbers(void)
{
	int numero = 0;

	while (numero < 10)
	{
		_putchar("0" + numero);
		numero++;
	}
}
