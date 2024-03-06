#include "main.h"

/**
 * puts2 - the function prints every other character of a string.
 * @str: matriz of number.
 */

void puts2(char *str)
{
	int cantidad = 0;
	int resultado;

	while (str[cantidad] != '\0')
	{
		cantidad++;
	}

	resultado = cantidad - 1;

	int i;

	for (i = 0; i < resultado; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
