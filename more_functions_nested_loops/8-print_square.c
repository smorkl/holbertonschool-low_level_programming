#include "main.h"

/**
 * print_square - The function prints a square with the character #.
 * @size: size is the size of the square
 *
 */

void print_square(int size)
{
	int contador1 = 0;

	while (contador1 < size && size > 0)
	{
		int contador2;

		for (contador2 = 0; contador2 < size; contador2++)
		{
			_putchar('#');
		}
		contador1++;
		_putchar('\n');
	}
	_putchar('\n');
}
