#include "main.h"

/**
 * *_strncpy - the function copy a string of characters
 * @dest: string of destination
 * @src: string of char
 * @n: number of n bytes
 */

char *_strncpy(char *dest, char *src, int n)
{
	int contador_bytes = 0;

	while (contador_bytes <= n && src[contador_bytes] != '\0')
	{
		dest[contador_bytes] = src[contador_bytes];
		contador_bytes++;
	}

	while (contador_bytes < n)
	{
		dest[contador_bytes] = '\0';
		contador_bytes++;
	}
	return (dest);
}
