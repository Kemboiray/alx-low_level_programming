#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to string describing file name
 * @text_content: pointer to buffer with NULL termiated text to append
 *
 * Return: 1 (success), or -1 (failure - filename == NULL, file does not exist,
 * or write fails).
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t wrt;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	wrt = write(fd, text_content, strlen(text_content));
	if (wrt == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
