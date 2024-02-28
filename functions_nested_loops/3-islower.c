#include "main.h"

/**
 * _islower - check if the letter is lowercase
 * @c : lether but check
 *
 * Return: 1 if lowercase o 0 if capital letter
 *
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
