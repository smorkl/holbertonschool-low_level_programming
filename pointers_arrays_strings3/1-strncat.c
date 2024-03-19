#include "main.h"

/**
 * _strncat - the fuction concatenates two strings but two string
 *           use n bytes
 * @dest: one string
 * @src: two string
 * @n: number of bytes
 * Return: a pointer of the string concatenates
 */

char *_strncat(char *dest, char *src, int n)
{
	int contador_dest = 0;
	int contador_src = 0;
	int contador;

	while (dest[contador_dest] != '\0')
	{
		contador_dest++;
	}

	while (src[contador_src] != '\0')
	{
		contador_src++;
	}

	for (contador = 0; src[contador] != '\0' && contador < n; contador++)
	{
		dest[contador_dest++] = src[contador];
	}

	dest[contador_dest] = '\0';

	return (dest);
}
