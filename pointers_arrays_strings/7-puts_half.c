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
	int contador;
	int i;
	int longitud_de_la_cadena;

	while (str[contador] != '\0')
	{
		contador++;
	}

	longitud_de_la_cadena = contador - 1;

	if ((longitud_de_la_cadena / 2) == 0)
	{
		for (i = 0; i <= (longitud_de_la_cadena / 2); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = 0; i < ((contador / 2) + 1); i++)
		{
			_putchar(str[((longitud_de_la_cadena - 1) / 2) + i]);
		}
	}
}
