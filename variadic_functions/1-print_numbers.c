#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - The function prints the numbers separated by
 *                 a comma and a space followed by a new line.
 * @separator:number separator.
 * @n: the number of the int.
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int contador;
	int num;
	va_list args;

	va_start(args, n);
	for (contador = 0; contador < n; contador++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && contador != n - 1)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(args);
}
