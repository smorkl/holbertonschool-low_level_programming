#include "main.h"

/**
 * _strpbrk - The function searches any string
              from an array of bytes and stops when
			  finds the first ocurrence.
 * @s: the string of the char.
 * @accept: the bytes to be searched.
 *
 * Return: returns the byte found or null if it was not found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int pasar = 0;

	while (s[pasar])
	{
		for (i = 0; accept[i]; i++)
		{
			if (s[pasar] == accept[i])
			{
				return (s);
			}
		}
		pasar++;
	}
	return (NULL);
}
