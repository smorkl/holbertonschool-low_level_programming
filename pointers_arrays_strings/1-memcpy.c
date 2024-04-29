#include "main.h"

/**
 * _memcpy - The function copies n bytes of
 *             str and pastes them into dest
 * @dest: pointer where n char will be copied
 * @src: pointer containing the chars to copy
 * @n: number of bytes to copy
 *
 * Return: pointer with copied char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int b = 0;

	while (b < n)
	{
		dest[b] = src[b];
		b++;
	}
	return (dest);
}
