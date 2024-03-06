#include "main.h"

/**
 * _strlen - the function print the long of char string
 *
 * @s: the
 *
 * Return: the longitud
 */

int _strlen(char *s)
{
	int longitud = 0;

	while (*s != '\0')
	{
		longitud++;
		s++;
	}
	return (longitud);
}
