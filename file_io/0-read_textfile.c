#include "main.h"

/**
 * read_textfile - a function that reads a text file and
 * prints it to the POSIX standard output.
 *
 * @filename: where the text is.
 * @letters: is the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 *
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t n_read;
	ssize_t	n_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	n_read = read(fd, buffer, letters);

	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	n_written = write(STDOUT_FILENO, buffer, n_read);

	if (n_written != n_read)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	free(buffer);
	close(fd);
	return (n_read);
}
