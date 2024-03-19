#include "main.h"

/**
 * _memset - The function will fill the spaces n of
 *           the pointer s with the char b
 * @s: the pointer pointing to the string
 * @b: the char that will fill the spaces
 * @n: number of spaces to fill
 *
 * Return: pointer wint char
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int re = 0;

	while (re < n)
	{
		s[re] = b;
		re++;
	}
	return (s);
}
