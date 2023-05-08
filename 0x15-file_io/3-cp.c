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
	int fd_from = open(argv[1], O_RDONLY);
	int fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	if (fd_from < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	while ((x = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (fd_to < 0 || write(fd_to, buffer, x) != x)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fd_from);
			exit(99);
		}
	}
	if (x < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_src = close(fd_from);
	f_dest = close(fd_to);
	if (f_src < 0 || f_dest < 0)
	{
		if (f_src < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		if (f_dest < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}
