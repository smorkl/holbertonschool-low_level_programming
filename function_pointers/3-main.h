#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * main - print the operation
  *
  * @argc: size of parameter
  * @argv: values of the array
  *
  * Return: if argc != 4 return else return 0
  *
  */
int main(int argc, char *argv[])
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	op = get_op_func(argv[2]);

	if (!op)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
