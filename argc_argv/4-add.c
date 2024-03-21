#include <stdlib.h>
#include <stdio.h>

/**
 * main - The function prints the sum of 2 positive numbers
 * @argc: the number of argumets of array.
 * @argv: an pointer to pointer of arguments.
 *
 * Return: If one of the numbers has a symbol return 1 else return 0
 */

int main(int argc, char *argv[])
{
	int resultado;
	unsigned int num1, num2;

	if (argc < 3)
	{
		printf("0\n");
		return (0);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	if (num1 <= 0 || num2 <= 0)
	{
		printf("Error\n");
		return (1);
	}

	resultado = num1 + num2;
	printf("%d\n", resultado);

	return (0);
}
