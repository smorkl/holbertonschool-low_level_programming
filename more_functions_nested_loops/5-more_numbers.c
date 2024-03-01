#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14
 *
 *
 *
 */

void more_numbers(void)
{
	int repetidor = 0;

	while (repetidor < 11)
	{
		int numero = 0;

		if (numero < 10)
		{
			_putchar('0' + numero);
			numero++;
		}
		else
		{
			int primero;
			int segundo;

			primero = numero / 10;
			_putchar('0' + primero);
			segundo = numero % 10;
			_putchar('0' + segundo);
			numero++;
		}
		_putchar('\n');
		repetidor++;
	}
}
