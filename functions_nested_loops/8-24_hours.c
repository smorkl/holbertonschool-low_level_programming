#include "main.h"

/**
 * jack_bauer - the function prints every minute of the day of Jack Bauer
 * @void: vacio
 *
 */

void jack_bauer(void)
{
	int hora;
	int minutos;

	while (hora < 24)
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
