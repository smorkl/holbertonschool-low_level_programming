#include <stdio.h>

/**
 * main - this program  prints the numbers
 *             from 1 to 100 with some conditions.
 */

int main(void)
{
	int numero = 1;

	while (numero < 100)
	{
		int multiplicador = 5;
		int multi = 3;
		int resultado;
		int resultado2;

		resultado = numero % multiplicador;
		resultado2 = numero % multi;
		if (resultado == 0 && resultado2 == 0)
		{
			printf("FizzBuzz ");
			numero++;
		}
		else
		{
			if (resultado == 0)
			{
				printf("Buzz ");
				numero++;
			}
			else if (resultado2 == 0)
			{
				printf("fizz ");
				numero++;
			}
			else
			{
				printf("%d ", numero);
				numero++;
			}
		}
	}
	putchar('\n');
	return (0);
}
