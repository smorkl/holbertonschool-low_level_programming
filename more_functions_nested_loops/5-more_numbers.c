#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14
 *
 *
 *
 */

void more_numbers(void)
{
	int numero = 0;
	int primero;
	int segundo;
	int repetir;

	while (repetir <= 14)
	{
		for (numero = 0; numero <= 14; numero++)
		{
			if (numero > 9)
			{
				primero = numero / 10;
				_putchar('0' + primero);
			}
			segundo = numero % 10;
			_putchar('0' + segundo);
		}
	}
	repetir++;
	_putchar('\n');
}
