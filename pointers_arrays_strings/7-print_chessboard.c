#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - the fuction prints a chessboard
 * @a: the chessborad.
 *
 */

void print_chessboard(char (*a)[8])
{
	int i;

	while (i < 8)
	{
		int j = 0;

		while (j < 8)
		{
			printf("%c", a[i][j]);
			j++;
		}
		printf("\n");
		i++;
	}
}
