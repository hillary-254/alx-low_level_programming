#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to POSIX standard output
 * @filename: source file
 * @letters: the number of letters to be read then printed
 * Return: ...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, ch_read;
	char *memory_space;

	memory_space = malloc(sizeof(char *) * letters);
	if (!filename)
		return (0);

	if (!memory_space)
		return (0);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
		return (0);

	ch_read = read(fd, memory_space, letters);
	write(STDOUT_FILENO, memory_space, ch_read);

	free(memory_space);
	close(fd);
	return (ch_read);
}
