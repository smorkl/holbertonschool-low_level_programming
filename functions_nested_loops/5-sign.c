#include "main.h"

/**
 * print_sign - check if a number is negative positive or equal to 0
 * @n: number
 *
 * Return: 1 if is positive, o if is zero y -1 if is negative.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
