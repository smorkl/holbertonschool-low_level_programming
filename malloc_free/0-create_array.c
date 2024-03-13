#include <stdlib.h>
#include "main.h"

/**
 * create_array - the function create an array of char and
 *                initializes it with a specific char
 * @size: array size
 * @c: specific char
 *
 * Return: return a pointer to the array.
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	int contador;

	str = (char*)malloc(size * sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}

	for (contador = 0; contador < size; contador++)
	{
		str[contador] = c;
	}

	return (str);
}
