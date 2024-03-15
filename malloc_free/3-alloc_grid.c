#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - the fuction return a pointer two dimensional
 *              and the array of integers starts at 0.
 * @width: the width of array.
 * @height: the height of array.
 */

int **alloc_grid(int width, int height)
{
	int **matrix;
	int s1;
	int s2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (s1 = 0; s1 < height; s1++)
	{
		matrix[s1] = malloc(sizeof(int) * width);

		if (matrix[s1] == NULL)
		{
			for (; s1 >= 0; s1--)
			{
				free(matrix[s1]);
			}

			free(matrix);
			return (NULL);
		}

		for (s2 = 0; s2 < width; s2++)
		{
			matrix[s1][s2] = 0;
		}
	}
		return (matrix);
}
