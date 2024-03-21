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
	int repetir_suma, num;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (repetir_suma = 0; repetir_suma < argc; repetir_suma++)
	{
		num = atoi(argv[repetir_suma]);

		if (num < 0)
		{
			printf("Error\n");
			return (1);
		}

		resultado += num;
	}

	printf("%d\n", resultado);

	return (0);
}
