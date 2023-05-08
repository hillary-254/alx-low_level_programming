#include "main.h"

/**
 * create_file - creates a file
 * @filename: the filename being created
 * @text_content: the text to be added on the newly created file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}
