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
		putchar('0' + hora / 10);
		putchar('0' + hora % 10);
		putchar(':');
		putchar('0' + minuto / 10);
		putchar('0' + minuto % 10);
		putchar('\n');
		minuto++;
	}
	minuto = 0;
	hora++;
}
