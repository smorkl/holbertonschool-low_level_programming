#include <stdio.h>
#include <stdlib.h>

/**
 * main - the fuction print the multiply 2 numbers from the array.
 * @argc: the number of arguments
 * @argv: the array of pointers to arguments.
 *
 * Return: return 0 if multiply two numbers or 1 if argc < 2.
 */

int main(int argc, char *argv[])
{
	int resultado;
	int num1, num2;

	if (argc < 3)
	{
		printf("error");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	resultado = num1 * num2;
	printf("%d\n", resultado);

	return (0);
}
