#include "main.h"

/**
 * main - the function gives 10 times the lowercase alphabet.
 *
 * Return: Always 0.
 */

int main(void)
{
    int a = 0;

    while (a < 10)
    {
        char letra;

        for (letra = 'a'; letra <= 'z'; letra++)
        {
            _putchar(letra);
        }
        _putchar('\n');
		a++;
     }

    return (0);
}
