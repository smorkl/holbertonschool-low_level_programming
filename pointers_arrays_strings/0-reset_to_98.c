#include "main.h"

/**
 *
 *
 *
 */

void reset_to_98(int *n)
{
	int p = 98;
	int primero;
	int segundo;

	*n = &p;

	primero = *n / 10;
	_putchar('0' + primero);
	segundo = *n % 10;
	_putchar('0' + segundo);

	_putchar('\n');

	return (0);
}
