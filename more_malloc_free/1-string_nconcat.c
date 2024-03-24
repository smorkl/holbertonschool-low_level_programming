#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - the function create an array of char and
 *                initializes it with a specific char
 * @s1: firts string
 * @s2: second string
 * @n: n bytes
 * Return: return a pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *contenedor;
	unsigned int lenscont = n, bytes;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (bytes = 0; s1[bytes]; bytes++)
	{
		lenscont2++;
	}

	contenedor = malloc(sixeof(char) * (lenscont));

	if (contenedor == NULL)
	{
		return (NULL);
	}

	lenscont = 0;

	for (bytes = 0; s1[bytes]; bytes++)
	{
		contenedor[lenscont++] = s1[bytes];
	}

	for (bytes = 0; s2[bytes] && bytes < n; bytes++)
	{
		contenedor[lenscont++] = s2[bytes];
	}

	return (contenedor);
}
