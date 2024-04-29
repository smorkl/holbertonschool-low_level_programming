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
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
