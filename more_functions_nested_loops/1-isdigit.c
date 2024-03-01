#include "main.h"

/**
 * _isdigit - This function checks a digit (0 to 9).
 * @c: caracter
 *
 * Return: 1 if is a digit or 0 if is otherwise
 */

int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
