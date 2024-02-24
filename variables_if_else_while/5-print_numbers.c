#include <stdio.h>

/**
 * main - this code prints all single digit numbers of
 *        base 10 starting from 0, followed by a new line.
 *
 * Return: Always 0.
 */

int main(void)
{
	int numero = 0;

	while (numero < 10)
	{
		printf("%d", numero);
		numero++;
	}
	putchar('\n');
	return (0);
}
