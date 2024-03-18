#include "main.h"

/**
 * print_alphabet_x10 - the function gives 10 times the lowercase alphabet.
 *
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char letra;

		for (letra = 'a'; letra <= 'z'; letra++)
		{
			_putchar (letra);
		}

		_putchar('\n');
		a++;
	}
}
