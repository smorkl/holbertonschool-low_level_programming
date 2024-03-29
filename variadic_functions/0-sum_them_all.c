#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - the fuction sum all number of the var_list.
 * @n: the number of int.
 *
 * Return: 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	int resultado = 0;
	unsigned int conteo;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (conteo = 0; conteo < n; conteo++)
	{
		resultado += va_arg(args, int);
	}
	va_end(args);
	return (resultado);
}
