#include "main.h"

/**
 * create_file - creates a file
 *
 * @filename: pointer to string describing the filename
 * @text_content: pointer to string to write into new file
 *
 * Return: 1 (success), -1 (failure - filename == NULL, file can not be
 * created, file can not be written, write “fails”).
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t wrt;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	wrt = write(fd, text_content, (size_t)(strlen(text_content) + 1));
	if (wrt == -1)
		return (-1);

	return (1);
}
