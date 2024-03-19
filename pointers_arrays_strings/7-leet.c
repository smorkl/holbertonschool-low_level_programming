#include "main.h"

/**
 * leet - The function encodes texts with certain conditions
 * @p: the string of char
 *
 * Return: returns an encoded pointer
 */

char *leet(char *p)
{
	int cont1 = 0, cont2;
	char condiciones[8] = {'O', 'L', ' ', 'E', 'A', ' ', ' ', 'T'};

	while (p[cont1])
	{
		for (cont2 = 0; cont2 <= 7; cont2++)
		{
			if (p[cont1] == condiciones[cont2] ||
				p[cont1] - 32 == condiciones[cont2])
			{
				p[cont1] = cont2 + '0';
			}
		}
		cont1++;
	}
	return (p);
}
