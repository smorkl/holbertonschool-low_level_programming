#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

void print_char(va_list arg)
{
	printf("%c", va_arg(arg, int));
}
void print_int(va_list arg)
{
	printf("%d", va_arg(arg, int));
}
void print_float(va_list arg)
{
	printf("%f", va_arg(arg, double));
}
void print_string(va_list arg)
{
	char *str = va_arg(arg, char *);

	if (str == NULL)
	q{
		printf("(nil)");
	}
	else
	{
		printf("%s", str);
	}
}

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *separator = "";
	void (*printers[4])(va_list) = {print_char, print_int,
		print_float, print_string};

	va_start(args, format);
	while (format && format[i])
	{
		if (format[i] == 'c' || format[i] == 'i' || format[i]
			== 'f' || format[i] == 's')
		{
			printf("%s", separator);
			printers[format[i] - 'c'](args);
			separator = ", ";
		}
		i++
	}
	printf("\n");

	va_end(args);
}
