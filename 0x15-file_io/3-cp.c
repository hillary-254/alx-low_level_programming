#include "main.h"

/**
 * main - entry point, copies the content of a file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, otherwise exit with error code
 */

int main(int argc, char *argv[])
{
	int x, f_src, f_dest;
	char *file_from = argv[1];
	char *file_to = argv[2];
	int fd_from = open(argv[1], O_RDONLY);
	int fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0666);
	char bufr[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_to);
		exit(99);
	}

	while ((x = read(fd_from, bufr, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, bufr, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(fd_from);
			exit(99);
		}
	}
	if (x == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	f_src = close(fd_from);
	f_dest = close(fd_to);
	if (f_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}

	if (f_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
