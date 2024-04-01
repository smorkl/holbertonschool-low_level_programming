xc#include "function_pointers"

/**
 * array_iterator - the function executes a function given
 *                  as a parameter on each element of an array
 * @array: The array
 * @size: The size of array
 * @action: A pointer to the function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		return;
	}

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
