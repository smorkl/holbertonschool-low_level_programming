#include "main.h"

/**
 * cap_string - the fuction convert a string from lowercase to uppercase
 * @ptr: the string
 * Return: pointer with capital letters
 */

char *cap_string(char *ptr)
{
	int leng = 0;

	while (ptr[leng])
	{
		if (ptr[leng] >= 'a' && ptr[leng] <= 'z')
		{
			ptr[leng] = (ptr[leng] - 32);
		}
		else
		{
			ptr[leng] = ptr[leng];
		}
		leng++;
	}
	return (ptr);
}
