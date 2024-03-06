#include "main.h"

/**
 * puts_half - the function print the half of a string but if
 *             the amount of char is odd the last n characters
 *
 *@str: sting of numbers
 *
 */

void puts_half(char *str)
{
	int contador = 0;
	int i;
	int longitud_de_la_cadena;

	while (str[contador] != '\0')
	{
		contador++;
	}

	longitud_de_la_cadena = contador;

	if ((longitud_de_la_cadena % 2) != 0)
	{
		for (i = (longitud_de_la_cadena + 1) / 2; i < contador; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = longitud_de_la_cadena / 2; i < contador; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
