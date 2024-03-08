#include "main.h"

/**
 * *_strcat - the function concatenates two strings.
 * @dest: string 1
 * @src: string 2
 *
 * Return: pointer of string concatenate
 */

char *_strcat(char *dest, char *src)
{
	int contador_dest = 0;
	int contador_src = 0;
	int cantidad_char;
	char tmp;
	int i = 0;

	while (src[contador_src] != '\0')
	{
		contador_src++;
	}

	while (dest[contador_dest] != '\0')
	{
		contador_dest++;
	}

	cantidad_char = contador_src + contador_dest;

	for (contador_dest; contador_dest < cantidad_char; contador_dest++)
	{
		tmp = src[i];
		dest[contador_dest] = tmp;
		i++;
	}
	return (&dest);
}
