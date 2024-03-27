#include "main.h"

/**
 * _strstr - the fuction locates a substring
 * @haystack: the string
 * @needle: the string a loacates
 *
 * Return: a pointer pointing to the substring.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start;

		start = haystack;

		while (*needle && *haystack && *needle == *haystack)
        {
			needle++;
			haystack++;
		}
		if (*needle == '\0')
		{
			return start;
		}

		needle = needle - (haystack - start);
		haystack = start + 1;
	}
	return (0);
}
