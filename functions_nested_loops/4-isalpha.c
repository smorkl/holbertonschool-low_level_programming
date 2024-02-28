#include "main.h"

/**
 * _isalpha - This function checks whether a character or a letter
 * @c: character
 *
 * Return: 1 if is a letter o 0 if a character
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
