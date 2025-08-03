#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: is the name of the file.
 * @text_content: the NULL terminated string
 * to add at the end of the file.
 *
 * Return: 1 on success and -1 on failure.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	int len = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		if (write(file, text_content, len) == -1)
		{
			close(file);
			return (-1);
		}
	}

	close(file);
	return (1);
}

