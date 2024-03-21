#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - The function prints the numbers separated by
 *                 a comma and a space followed by a new line.
 * @separador:number separator.
 * @n: the number of the int.
 *
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int contador;
	int num;
	var_list args;

	var_start (args, n);
	for (contador = 0; contador < n; contador++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separador != NULL && contador != (n -1))
		{
			printf("%s", separador);
		}
	}

	printf("\n");

	va_end(num);
}
