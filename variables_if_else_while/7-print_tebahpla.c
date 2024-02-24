#include <stdio.h>

/**
 * main - this code shows me the english alphabet in lowercase
 *        the other way around.
 * Return: Always 0.
 */

int main(void)
{
	int codigo_letra = 122;

	while (codigo_letra != 96)
	{
		putchar(codigo_letra);
		codigo_letra--;
	}

	putchar('\n');

	return (0);
}
