#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: the filename being created
 * @text_content: the text to be added on the newly created file
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
/* file descriptor of the newly created file*/
	int fd;

/*checks if the filename is null & returns -1 if true*/
	if (!filename)
		return (-1);
/* file is opened using open() and following parameters passed*/
/* O_RDWR -specifies that file should be open for both reading & writing*/
/* O_CREAT -specifies that the file should be created if it doesn't exist*/
/*O_TRUNC -specifies that the file should be truncated if it already exists*/
/*S_IRUSR - specify the file permissions, in this case, read for the owner*/
/*S_IWUSR - specify the file permissions, in this case, write for the owner*/

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

/*checks if fd is valid. If not, returns -1 to indicate an error.*/
	if (fd == -1)
		return (-1);

/*If text_content is not NULL, writes to the file using the write system call*/
/*_strlen function is used to determine the length of the text_content string*/

	if (text_content)
		write(fd, text_content, strlen(text_content));

/*closes the file and returns 1 to indicate it was successful*/

	close(fd);
	return (1);
}
