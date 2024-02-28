#include "main.h"

/**
 * print_last_digit - print yhe last digit a number
 * @num: number
 *
 * Return: ultime digit
 */

int print_last_digit(int num)
{
	int num_ultime;

	if ((num > 0) || (num < 0) )
	{
		num_ultime = num % 10;
		return num_ultime;
	}
	else
	{
		return (0);
	}
}
