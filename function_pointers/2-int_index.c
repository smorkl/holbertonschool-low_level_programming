#inluce "fuction_pointers.h"

/**
 * int_index -
 * @array: the array of integers.
 * @size: the size of the array.
 * @cmp: a pointer to the fuction.
 *
 * Return: if array == NULL or cmp == NULL return
 *         and size <= 0 return -1 else return index.
 *
 *
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (index = 0; index < size; inex++)
	{
		if (cmp(array[index]) != 0)
		{
			return (index);
		}
	}

	return (-1);
}
