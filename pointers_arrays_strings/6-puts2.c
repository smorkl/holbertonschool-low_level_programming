#include "main.h"

/**
 * puts2 - print number of 2 in 2
 * @str: string of char
 *
 */

void puts2(char *str)
{
	int cantidad = 0;
	int i;
	int resultado;

	while (str[cantidad] != '\0')
	{
		cantidad++;
	}

	resultado = cantidad - 1;

	for (i = 0; i < resultado; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
