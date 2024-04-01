#include "main.h"

/**
 * swap_int - This function change the value of the pointer
 *
 * @a: Pointer to a number
 * @b: pointer to a 2 number
 */

void swap_int(int *a, int *b)
{
	int numero = *a;

	*a = *b;
	*b = numero;
}
