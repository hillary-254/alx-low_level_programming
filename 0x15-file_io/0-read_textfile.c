#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads a text file and prints it to POSIX standard output
 * @filename: source file
 * @letters: the number of letters to be read then printed
 * Return: ...
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, letter_read;
	char *mem_sp;

	mem_sp = malloc(sizeof(char *) * letters);

/*check if mem_sp and filename are valid pointers. Returns 0 if they are null*/
	if (!filename)
		return (0);
	if (!mem_sp)
		return (0);

/*open file and set to read only and give the fileowner permision to r and w*/
	fd = open(filename, O_RDONLY, 0600);
/*if open call fails we return 0*/
	if (fd == -1)
		return (0);

	letter_read = read(fd, mem_sp, letters);
	write(STDOUT_FILENO, mem_sp, letter_read);

	/*we free the memory and close the file*/
	free(mem_sp);
	close(fd);

	return (letter_read);
}
