#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * output
 * @filename: pointer to string describing the text file name
 * @letters: number of letters to print
 *
 * Return: bytes read and printed (success), or 0 (filename is NULL, open,
 * read or write failed).
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wrt, rd;
	char *buf;
	int opn;

	if (filename == NULL)
		return (0);

	opn = open(filename, O_RDONLY);
	if (opn < 0)
		return (0);

	buf = malloc(letters * sizeof(*buf));
	if (buf == NULL)
	{
		close(opn);
		return (0);
	}

	rd = read(opn, buf, letters);
	if (rd < 0)
		return (0);

	wrt = write(STDOUT_FILENO, buf, (size_t)rd);
	if (wrt < rd)
	{
		close(opn);
		free(buf);
		return (0);
	}

	close(opn);
	free(buf);
	return (wrt);
}
