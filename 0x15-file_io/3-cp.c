#include "main.h"
#include <stdio.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * _print_error - handles error
 * @msg: error message
 * @arg: arguments size
 * Return: none
 */

void _print_error(char *msg, char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
}

/**
 * main - Entry point
 * @argc: The argument count
 * @argv: The argument vector
 * Return: ...
 */

int main(int argc, char *argv[])
{
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_from = open(file_from, O_RDONLY);
	int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	char buf[BUF_SIZE];
	ssize_t nread;

	if (argc != 3)
	{
		_print_error("Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}


	if (fd_from == -1)
	{
		_print_error("Error: Can't read from file %s\n", file_from);
		exit(98);
	}


	if (fd_to == -1)
	{
		_print_error("Error: Can't write to %s\n", file_to);
		exit(99);
	}


	while ((nread = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buf, nread) != nread)
		{
			_print_error("Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (nread == -1)
	{
		_print_error("Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		char fd_from_str[12];
		sprintf(fd_from_str, "%d", fd_from);
		_print_error("Error: Can't close fd %d\n", fd_from_str);
		exit(100);
	}

	if (close(fd_to) == -1)
	{
		char fd_to_str[12];
		sprintf(fd_to_str, "%d", fd_to);
		_print_error("Error: Can't close fd %d\n", fd_to_str);
		exit(100);
	}

	return (0);
}
