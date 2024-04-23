#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * error_file - Handles file-related errors.
 *
 * @file_from: File descriptor of the file being read from.
 * @file_to: File descriptor of the file being written to.
 * @argv: Command-line arguments.
 */
void error_file(int file_from, int file_to, char *argv[]) {
    if (file_from == -1) {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    if (file_to == -1) {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        exit(99);
    }
}

/**
 * main - Copies content from one file to another.
 *
 * @argc: Argument count.
 * @argv: Argument vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[]) {
    int file_from, file_to;
    ssize_t lenchar, wrf;
    char buf[1024]; // Buffer size for reading/writing

    if (argc != 3) {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);
    file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
    error_file(file_from, file_to, argv);

    do {
        lenchar = read(file_from, buf, sizeof(buf));
        if (lenchar == -1) {
            dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
            exit(98);
        }
        wrf = write(file_to, buf, lenchar);
        if (wrf != lenchar) {
            dprintf(STDERR_FILENO, "Error: Incomplete write to file %s\n", argv[2]);
            exit(99);
        }
    } while (lenchar > 0);

    if (close(file_from) != 0) {
        dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", file_from);
        exit(100);
    }
    if (close(file_to) != 0) {
        dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", file_to);
        exit(100);
    }

    return (0);
}
