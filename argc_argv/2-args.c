#include <stdio.h>

/**
 * main - the fuction print the argumets of array.
 * @argc: the number of arguments.
 * @argv: an array of pointer to  the arguments.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int a = 0;

	while (argv[a] < argv[argc])
	{
		printf("%s\n", argv[a]);
		a++;
	}

	return (0);
}
