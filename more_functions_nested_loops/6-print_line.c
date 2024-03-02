#include "main.h"

/**
 * print_line - This function prints the character in quantity -.
 * @n: number
 *
 */

void print_line(int n)
{
  if (n > 0)
  {
	  int contador;

	  while (contador < n)
	  {
		  _putchar('_');
		  contador++;
	  }
	  _putchar('\n');
  }
  else
  {
	  _putchar('\n');
  }
}
