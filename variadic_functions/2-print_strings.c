#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - the fuction print strings follow of a separator.
 * @n: the number of strings.
 * @separator: the string that separates the strings.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list cadenas;
	unsigned int contador;
	char *cont;

	va_start(cadenas, n);
	for (contador = 0; contador < n; contador++)
	{
		cont = va_arg(cadenas, char *);

		if (cont == NULL)
		{
			printf("nil");
		}
		else
		{
			printf("%d", cont[0]);
		}

		if (separator != NULL && contador != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(cadenas);
}
