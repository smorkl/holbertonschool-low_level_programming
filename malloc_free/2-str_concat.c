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
	int total_bytes;
	char *concatenar;
	int pasar;

	while (s1[bytes1])
	{
		bytes1++;
	}
	while (s2[bytes2])
	{
		bytes2++;
	}
	total_bytes = bytes1 + bytes2;
	concatenar = malloc(sizeof(char) + (total_bytes + 1));
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
	for (bytes1; bytes1 < total_bytes; bytes1++)
	{
		concatenar[bytes1] = s2[pasar];
		pasar++;
	}
	concatenar[total_bytes] = '\0';
	return (concatenar);
}
