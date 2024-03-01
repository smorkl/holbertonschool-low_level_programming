#include "main.h"

/**
 * _isupper - This function tells me if a letter is lowercase or uppercase
 *@c: lether
 *
 * Return: 1 if is lowercase or 0 if is uppercase
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
