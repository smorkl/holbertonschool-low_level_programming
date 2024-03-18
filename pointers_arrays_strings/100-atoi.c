#include "main.h"

/**
 * _atoi - the fuction convert a string to an integer.
 * @s: the string
 *
 * Return: a int wint signo
 */

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		num = (num * 10) + (*s - '0');
		s++;
	}

	return (num * sign);
}
