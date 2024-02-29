#include "main.h"

/**
 *
 *
 *
 */

void times_table(void)
{
	int numero_multiplicador = 0;
	int numero_factor = 0;

	while (numero_multiplicador < 10)
	{
		if (numero_factor < 11)
		{
			int resultado = numero_multiplicador * numero_factor;

			if (resultado < 10)
			{
				if (resultado )
				_putchar(' ');
				_putchar('0' + resultado);
				_putchar(',');
				_putchar(' ');
				numero_factor++;
			}
			else if (numero_multiplicador < 9)
			{
				int segundo;
				int primero;

				primero = resultado / 10;
				_putchar('0' + primero);
				segundo = resultado % 10;
				_putchar('0' + segundo);
			}
			else
			{
				int primero;
				int segundo;

				primero = resultado / 10;
				_putchar('0' + primero);
				segundo = resultado % 10;
				_putchar('0' + segundo);
				_putchar(',');
				_putchar(' ');
				numero_factor++;
			}
			if (numero_factor == 10)
			{
				numero_factor = 0;
				_putchar('\n');
				numero_multiplicador++;
			}
		}
	}
}
