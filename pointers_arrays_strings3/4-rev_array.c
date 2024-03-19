#include "main.h"

/**
 * reverse_array - the fuction reverses the content of an array,
 * @a: this is a array.
 * @n: array size
 */

void reverse_array(int *a, int n)
{
	int pasar, tmp;
	int n2 = n - 1;

	for (pasar = 0; pasar < (n / 2); pasar++)
	{
		tmp = a[pasar];
		a[pasar] = a[n2];
		a[n2] = tmp;
		n2--;
	}
}
