#include "main.h"

/**
 * *_strcpy - The function copies the string pointed to by src, including
 *            the terminating null byte, to the buffer pointed to by dest.
 *
 * @dest: pointer to char where the copied string will be stored.
 * @src: pointer to char from which the string will be copied.
 *
 * Return: The pointer to dest.
 */

char *_strcpy(char *dest, const char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	return (dest);
}
