#include "main.h"

/**
 * print_triangle - this is  function prints a triangle
 * @size: size of the triangle
 */

void print_triangle(int size)
{
	int rondas = 0;
	int contador;
	int resta = 1;
	int size2;
	int cara;

	while (rondas < size)
	{
		size2 = size - resta;
		for (contador = 0; contador < size2; contador++)
		{
			_putchar(' ');
		}
		for (cara = 1; cara <= resta; cara++)
		{
			_putchar('#');
		}
		rondas++;
		resta++;
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
