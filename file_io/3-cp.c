#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
  * error_file - error to the open file
  *
  * @file_from: file from
  *
  * @file_to: file to
  *
  * @argv: argument passed by parameter
  */

void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
				argv[1]);
		exit(98);
	}

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n",
				argv[2]);
		exit(99);
	}
}


/**
  * main - check the code cp
  *
  * @argc: argument count
  *
  * @argv: argument vector
  *
  * Return: Always 0
  *
  */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t lenchar, wrf;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	lenchar = 1024;

	while (lenchar == 1024)
	{
		lenchar = read(file_from, buf, 1024);
		if (lenchar == -1)
			error_file(-1, 0, argv);

		wrf = write(file_to, buf, lenchar);
		if (wrf == -1)
			error_file(0, -1, argv);
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE%d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE%d\n", file_from);
		exit(100);
	}
	return (0);
}
