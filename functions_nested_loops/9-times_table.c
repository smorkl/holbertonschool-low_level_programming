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
	int columna = 0;

	while (numero_multiplicador < 10)
	{
		if (numero_factor < 9)
		{
			int resultado = numero_multiplicador * numero_factor;

			if (columna < 9)
			{
				if (resultado < 9)
				{
					_putchar('0' + resultado);
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					numero_factor++;
					columna++;
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
					columna ++;
				}
			}
			if (columna == 9)
			{
				if (resultado < 9)
				{
					_putchar('0' + resultado);
					numero_factor++;
					columna++;
				}
				else
				{
					int primero;
					int segundo;

					primero = resultado / 10;
					_putchar('0' + primero);
					segundo = resultado % 10;
					_putchar('0' + segundo);
					_putchar(' ');
					numero_factor++;
					columna ++;
				}
			}
			if (numero_factor == 10)
			{
				numero_factor = 0;
				columna = 0;
				_putchar('\n');
				numero_multiplicador++;
			}
		}
	}
}

int main(void)
{
	times_table();
	return (0);
}