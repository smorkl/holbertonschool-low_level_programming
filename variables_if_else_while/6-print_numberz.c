#include <stdio.h>

/**
 * main - this code prints all single digit numbers of
 *        base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int numero = 48;

	while (numero < 58)
	{
		putchar(numero);
		numero++;
	}
	putchar('\n');
	return (0);
}
