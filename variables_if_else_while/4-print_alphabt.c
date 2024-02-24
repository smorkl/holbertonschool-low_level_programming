#include <stdio.h>

/**
 * main - this code shows me the english alphabet in lowercase.
 *
 * Return: Always 0.
 */

int main(void)
{
	int codigo_letra = 97;

	while (codigo_letra != 123)
	{
		if (codigo_letra == 113 || codigo_letra == 101)
		{
			codigo_letra++;
			continue;
		}
		putchar(codigo_letra);
		codigo_letra++;
	}

	putchar('\n');

	return (0);
}
