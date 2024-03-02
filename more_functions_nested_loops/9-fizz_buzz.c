#include <stdio.h>
/**
 * main - this program  prints the numbers
 *             from 1 to 100 with some conditions.
 */
int main(void)
{
	int numero;

	for (numero = 1; numero <= 100; numero++)
	{
		if (numero % 3 == 0 && numero % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (numero % 3 == 0)
		{
			printf("Fizz");
		}
		else if (numero % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", numero);
		}
		if (numero < 100)
		{
			printf(" ");
		}
	}

	putchar('\n');

	return (0);
}
