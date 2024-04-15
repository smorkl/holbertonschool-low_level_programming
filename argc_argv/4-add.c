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
	int num, digit, sum = 0;

	for (num = 1; num < argc; num++)
	{
		for (digit = 0; argv[num][digit]; digit++)
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[num]);
	}

	printf("%d\n", sum);

	return (0);
}
