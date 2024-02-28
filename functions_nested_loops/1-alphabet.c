#include "main.h"

/**
 * print_alphabet - This function prints the lowercase
 *                  alphabet from 'a' to 'z'.
 */

void print_alphabet(void)
{
    int codigo_letra = 97;

    while (codigo_letra < 123)
    {
        _putchar(codigo_letra);
        codigo_letra++;
    }

    _putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    print_alphabet();
    return (0);
}
