#include "main.h"

/**
 * set_bit - Sets a specific bit to 1 at a given index.
 * @n: A pointer to the bit.
 * @index: The index at which to set.
 *
 * Return: If an error occurs, returns -1.
 *         Otherwise, returns 1.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}
