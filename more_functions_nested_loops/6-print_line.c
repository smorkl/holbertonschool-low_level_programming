#include "main.h"

/**
 * print_line - This function prints the character in quantity -.
 * @n: number
 *
 */

void print_line(int n)
{
	int contador = 0;

	while (contador <= n && n > 0)
	{
		_putchar('_');
		contador++;
	}
	_putchar('\n');
}
int main(void)
{
	print_line(0);
	print_line(2);
	print_line(10);
	print_line(-4);
	return (0);
}
