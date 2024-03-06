#include "main.h"

/**
 * rev_string - the function prints every other character of a string.
 * @s: matriz of char.
 */

void rev_string(char *s)
{
    int cantidad = 0;
    int i;
    int resultado;
    char temp;

    while (s[cantidad] != '\0')
    {
        cantidad++;
    }

    resultado = cantidad - 1;

    for (i = 0; i < resultado / 2; i++)
    {
      temp = *(s + i);
      s[i] = s[resultado - i];
      s[resultado - i] = temp;
    }
}
