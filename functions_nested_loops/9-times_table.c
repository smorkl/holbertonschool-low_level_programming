#include "main.h"

/**
 * times_table - Imprime la tabla de multiplicar del 0 al 9
 */
void times_table(void)
{
	int  multiplicador, factor, resultado;

	for (multiplicador = 0; multiplicador <= 9; multiplicador++)
	{
		for (factor = 0; factor <= 9; factor++)
		{
			resultado = multiplicador * factor;

			if (factor > 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (resultado < 10 && factor > 0)
			{
				_putchar(' ');
			}

			if (resultado >= 10)
			{
				_putchar(resultado / 10 + '0');
			}

			_putchar(resultado % 10 + '0');
		}

		__putchar('\n');
	}
}
