#incliude "main.h"

/**
 * _strcat - the fuction concatenates two strings but two string
 *           use n bytes
 * @dest: one string
 * @src: two string
 *
 * Return: a pointer of the string concatenates
 */

char *_strcat(char *dest, char *src)
{
	int contador_dest = 0;
	int contador;

	while (dest[contador_dest])
	{
		contador_dest++;
	}

	for (contador = 0; src[contador_dest] && contador < n; contador++)
	{
		dest[contador_dest++] = src[contador];
	}

	return (dest);
}
