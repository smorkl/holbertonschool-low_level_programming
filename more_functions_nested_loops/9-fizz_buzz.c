#include <stdio.h>
#include "main.h"

/**
 *
 *
 *
 *
 */

int fizz_buzz(void)
{
	int numero = 0;

	while (contador < 100)
	{
		int multiplicador = 5;
		int multiplicador2 = 3;
		int resultado;
		int resultado2;

		resultado = numero % multiplicador;
		resultado2 = numero % multiplicador;
		if (resultado == 0 && resultado2 == 0)
		{
			printf(" FizzBuzz");
			numero++;
		}
		else
		{
			if (resultado == 0)
			{
				printf(" Buzz");
				numero++;
			}
			else if (resultado2 == 0)
			{
				printf(" fizz");
				numero++;
			}
			else ()
			{
				printf("%d", numero);
			}
		}
	}
	putchar('\n');
}
