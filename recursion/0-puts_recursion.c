#include <stdio.h>
#include "main.h"

/**
 * _puts_recursion - the fuction print a string.
 * @s: a string.
 *
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
