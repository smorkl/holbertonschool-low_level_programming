#include <stdarg.h>
#include "variadic_functions.h"

int sum_them_all(const unsigned int n, ...)
{
	int resultado = 0;
	int conteo;
	va_list args;

	if (n == 0)
	{
		return (0);
	}

	va_start(args, n);
	for (conteo = 0; conteo < n; conteo++)
	{
		resultado += va_args, int;
	}
	va_end(args);
	return (resultado);
}
