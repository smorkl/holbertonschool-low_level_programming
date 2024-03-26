#include <stdio.h>
#include "main.h"

/**
 * _strspn - the futcion la funcion suma cuantas
 *           veces se encuntra un char en un string
 * @s: the string of the char.
 * @accept: the char string to find
 *
 */


unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	unsigned int find;
	int pasar = 0;

	while (s[pasar])
	{
		for (find = 0; accept[find]; find++)
		{
			if (s[pasar] == accept[find])
			{
				bytes++;
				break;
			}

			else if (accept[find + 1] == '\0')
				return (bytes);
		}

		pasar++;
	}

	return (bytes);
}
