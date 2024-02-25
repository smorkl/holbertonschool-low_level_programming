#include <stdio.h>

/**
 * main - this code prints all single digit numbers of
 *        base 10 starting from 0 and from a to f, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int numero = 48;
	int letra_minuscula = 97;

	while (numero < 58)
	{
		putchar(numero);
		numero++;
	}
	while (letra_minuscula < 103)
	{
		putchar(letra_minuscula);
		letra_minuscula++;
	}

	putchar('\n');

	return (0);
}
