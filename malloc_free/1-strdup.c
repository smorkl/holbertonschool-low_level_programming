#include "main.h"
#include <stdlib.h>

/**
 * _strdup - the function copie a string of char
 * @str: string of char
 *
 * Return: direction of pointer
 */

char *_strdup(char *str)
{
	char *deposito;
	int bytes = 0;
	int contador = 0;

	while (str[bytes])
	{
		bytes++;
	}

	deposito = malloc(sizeof(char) * (bytes + 1));

	if (deposito == NULL)
	{
		return (NULL);
	}

	while (contador <= bytes)
	{
		deposito[contador] = str[contador];
		deposito++;
	}

	free(str);
	return (deposito);
}
