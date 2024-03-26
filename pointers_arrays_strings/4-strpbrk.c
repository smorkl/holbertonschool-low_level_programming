#include "main.h"

/**
 * _strpbrk - The function searches any string from an array
 *              of bytes and stops when finds the first ocurrence.
 * @s: the string of the char.
 * @accept: the bytes to be searched.
 *
 * Return: returns the byte found or null if it was not found
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *temp;

		temp = accept;

		while (*temp)
		{
			if (*s == *temp)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return ('\0');
}
