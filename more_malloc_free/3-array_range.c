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
	int leng;
	int *ptr;
	int size;

	if (min > max)
	{
		return (NULL);
	}

	for (size = 0; min <= max; size++)
	{
		min++;
	}

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (leng = 0; leng < size; leng++)
	{
		ptr[leng] = min++;
	}

	return (ptr);
}
