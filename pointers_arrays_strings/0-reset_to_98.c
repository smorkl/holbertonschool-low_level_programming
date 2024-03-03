#include "main.h"

/**
 * reset_to_98 - This function updates the value of the integer
 *               to 98.
 * @n: Pointer to an integer
 *
 */

void reset_to_98(int *n)
{
	int primero;
	int segundo;
	*n = 98;

	primero = *n / 10;
	_putchar('0' + primero);
	segundo = *n % 10;
	_putchar('0' + segundo);

	_putchar('\n');
}
