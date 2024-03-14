#include <stdlib.h>
#include "main.h"
/**
 * str_concat - the function concatena two string.
 * @s1: string 1.
 * @s2: string 2.
 * Return: concatenated pointer address
 */
char *str_concat(char *s1, char *s2)
{
	int bytes1 = 0;
	int bytes2 = 0;
	char *concatenar;
	int pasar;
	int pasar2;

	while (s1[bytes1])
	{
		bytes1++;
	}
	while (s2[bytes2])
	{
		bytes2++;
	}
	concatenar = malloc(sizeof(char) + (bytes1 + bytes2 + 1));
	if (concatenar == NULL)
	{
		char *null;

		null = malloc(1);
		if (null == NULL)
		{
			return (NULL);
		}
		null[0] = '\0';
		return (null);
	}
	for (pasar = 0; pasar < bytes1; pasar++)
	{
		concatenar[pasar] = s1[pasar];
	}
	pasar = 0;
	for (pasar2 = bytes1; pasar2 < total_bytes; pasar2++)
	{
		concatenar[pasar2] = s2[pasar];
		pasar++;
	}
	concatenar[total_bytes] = '\0';
	return (concatenar);
}
