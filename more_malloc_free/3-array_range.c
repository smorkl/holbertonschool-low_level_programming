#include "main.h"
#include "stdlib.h"

/**
 * array_range - The function sorts some integers in an
 *                 array from minimum to maximum
 * @min: int min
 * @max: int max
 *
 * Return: pointer to an array.
 */

int *array_range(int min, int max)
{
	int i;
	int *ptr = NULL;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	for (size = 0; min < max; size++)
	{
		min++;
	}

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ptr[i] = min + i;
	}

	return (ptr);
}
