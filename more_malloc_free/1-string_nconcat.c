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

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *contenedor;
	int contador;
	int contador2;
	int pasar;

	while (s1[contador])
	{
		contador++;
	}
	while (s2[contador2])
	{
		contador2++;
	}
	if (n >= contador2)
	{
		contenedor = malloc(contador + contador2 + 1);

		for (pasar = 0; pasar < contador;pasar++)
		{
			contenedor[pasar] = s1[pasar]
		}

		for (;contador < (contador + contador2); contador++)
		{
			contenedor [contador] = s2[pasar];
		}
		return (contenedor);
	}
	contenedor = malloc(contador + n + 1);

	if (contenedor == NULL)
	{
		return (NULL);
	}



}
