#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

char *create_buffer(void);
void close_files(int from, int to);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(void)
{
    char *buffer;

    buffer = malloc(sizeof(char) * 1024);

    if (buffer == NULL)
    {
        perror("Error");
        exit(99);
    }

    return (buffer);
}

/**
 * close_files - Closes file descriptors.
 * @from: The file descriptor of the file being read from.
 * @to: The file descriptor of the file being written to.
 */
void close_files(int from, int to)
{
    int c1, c2;

    c1 = close(from);
    c2 = close(to);

    if (c1 == -1 || c2 == -1)
    {
        perror("Error");
        exit(100);
    }
}

/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 *              If file_from does not exist or cannot be read - exit code 98.
 *              If file_to cannot be created or written to - exit code 99.
 *              If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
    int from, to, r, w;
    char *buffer;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    buffer = create_buffer();
    from = open(argv[1], O_RDONLY);
    to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

    if (from == -1)
    {
        perror("Error");
        free(buffer);
        exit(98);
    }

    if (to == -1)
    {
        perror("Error");
        free(buffer);
        exit(99);
    }

    do {
        r = read(from, buffer, 1024);
        if (r == -1)
        {
            perror("Error");
            free(buffer);
            exit(98);
        }

        w = write(to, buffer, r);
        if (w == -1)
        {
            perror("Error");
            free(buffer);
            exit(99);
        }

    } while (r > 0);

    free(buffer);
    close_files(from, to);

    return (0);
}
