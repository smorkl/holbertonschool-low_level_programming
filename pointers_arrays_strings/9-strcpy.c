#include "main.h"

/*
 * _strcpy - The function moves data from a src pointer to
 *             the dest pointer.
 *
 * @dest: char void.
 * @src: char char to change.
 */

char *_strcpy(char *dest, char *src)
{
	int pasadas = 0;
	int contador = 0;

	while (src[contador] != '\0')
	{
		contador++;
	}

	while (pasadas <= contador)
	{
		dest[pasadas] = src[pasadas];
		pasadas++;
	}
	return (dest);
}
