#include "main.h"

/**
 * _strchr -
 * @s:
 * @c:
 *
 * Return:
 */

char *_strchr(char *s, char c)
{
	int re = 0;

	while (s[re] != '\0')
	{
		if (s[re] == c)
		{
			return (s + re);
		}
		re++;
	}
	return ('\0');
}
