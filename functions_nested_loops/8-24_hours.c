#include "main.h"

/**
 * jack_bauer - the function prints every minute of the day of Jack Bauer
 * @void: vacio
 *
 */

void jack_bauer(void)
{
	int hora = 0;
	int minuto = 0;

	while (hora < 24)
	{
		while (minuto < 60)
		{
			_putchar('0' + hora / 10);
			_putchar('0' + hora % 10);
			_putchar(':');
			_putchar('0' + minuto / 10);
			_putchar('0' + minuto % 10);
			_putchar('\n');
			minuto++;
		}
		minuto = 0;
		hora++;
	}
}
