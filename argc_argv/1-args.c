#include <stdio.h>

/**
 * main - the fuction print number of arguments of the array.
 * @argc: the number of arguments
 * @argv: an array of pointer to the arguments.
 *
 * Return: 0
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
