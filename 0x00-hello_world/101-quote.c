#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 * @void: Main has no arguments
 * Description: Prints using STDERR
 * Return: 1
 */
int main(void)
{
	const char *message;

	message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(STDERR_FILENO, message, strlen(message));
	return (1);
}
