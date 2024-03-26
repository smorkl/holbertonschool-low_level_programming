#include "main.h"

/**
 * _strchr - the fuction find a char.
 * @s: the pointer of chars.
 * @c: the char to look for.
 *
 * Return: if the fuction found char c return char c
 */

char *_strchr(char *s, char c)
{
	int re = 0;

	while (s[re] != '\0')
	{
		if (s[re] == c)
		{
			return (s + re);
		}
		re++;
	}
	return ('\0');
}
