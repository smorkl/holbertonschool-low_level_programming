#include "main.h"

/**
 * print_rev - the funcion print the chars revers.
 * @s: string
 *
 */
void print_rev(char *s)
{
	cahr *b = s;

	while (*b != '\0')
	{
		b++;
	}
	for (b; b > s; b--)
	{
		putchar(*b);
	}
	putchar('\n');
}
