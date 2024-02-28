#include "main.h"

/**
 * print_last_digit - print yhe last digit a number
 * @num: number
 *
 * Return: ultime digit
 */

int print_last_digit(int num)
{
	int num_ultime = num % 10;

	if (num < 0 )
	{
		num_ultime *= -1;
	}

	_putchar(num_ultime + '0');

	return (num_ultime);
}
