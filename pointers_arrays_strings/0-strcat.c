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

	while (dest[contador_dest] != '\0')
	{
		contador_dest++;
	}

	while (src[contador_src] != '\0')
	{
		dest[contador_dest] = src[contador_src];
		contador_dest++;
		contador_src++;
	}

	dest[contador_dest] = '\0';

	return (dest);
}
