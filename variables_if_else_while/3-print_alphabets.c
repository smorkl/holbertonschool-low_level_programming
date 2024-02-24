#include <stdio.h>

/**
 * main - this code shows me the english alphabet
 *          in lowercase and capital.
 *
 * Return: Always 0.
 */

int main(void)
{
	int codigo_mayusculas = 65;
	int codigo_minusculas = 97;

	while (codigo_mayusculas != 90)
	{
		putchar(codigo_mayusculas);
		codigo_mayusculas++;
	}
	while (codigo_minusculas != 122)
	{
		putchar(codigo_minusculas);
		codigo_minusculas++;
	}

	putchar('\n');

	return (0);
}
