#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the text to append to the file
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, ch_written = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		ch_written = write(fd, text_content, strlen(text_content));

		if (ch_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);

	return (ch_written == -1 ? -1 : 1);
}
