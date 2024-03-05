#include "main.h"

/**
 * _Puts - the funcion print the string of chars.
 * @str: matriz of chars.
 *
 */

void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
