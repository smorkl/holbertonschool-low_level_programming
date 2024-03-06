#include "main.h"

/**
 * print_rev - the funcion print the chars revers.
 * @s: string
 *
 */
void print_rev(char *s)
{
	char *b = s;

	while (*b != '\0')
	{
		b++;
	}

	b--;

	while (b >= s)
	{
		_putchar(*b);
		b--;
	}
	_putchar('\n');
}
