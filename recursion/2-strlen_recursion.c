#include "main.h"

/**
 * _strlen_recursion - the fuction return the size of string.
 * @s: the string.
 *
 * Return: size of string.
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
