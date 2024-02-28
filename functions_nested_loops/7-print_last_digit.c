#include "main.h"

/**
 * print_last_digit - print yhe last digit a number
 * @num: number
 *
 * Return: ultime digit
 */

int print_last_digit(int num)
{
	if (num == 0)
	{
		putchar('0');
		return (0);
	}
	else if (num < 0)
	{
		int num_ultime;
		num_ultime =-(num % 10);
		putchar(num_ultime);
		return last_digit;
	}
	else
	{
		int num_ultime;

		num_ultime =num % 10;
		putchar(num_ultime);
		return last_digit;
	}
}
