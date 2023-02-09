#include "main.h"

/**
 * read_textfile - function
 * @filename: filename
 * @letters: letters
 *
 * Return: bytes written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t wrt;
	int opn, cls;

	if (filename == NULL)
		return (0);

	opn = open(filename, O_RDWR);
	if (opn < 0)
		return (0);

/*	printf("opn = %d\n", opn);*/
	wrt = write(STDOUT_FILENO, filename, letters);
	if (wrt < (signed int)letters)
		return (0);

	cls = close(opn);
	if (cls != 0)
		return (0);

	return (wrt);
}
