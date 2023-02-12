#include "main.h"

/**
 * main - copies content of file_from to file_to
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 on success, error code on failure
 */
int main(int argc, char *argv[])
{
	mode_t perms = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	int fd_from, fd_to, rd, wrt, cls1, cls2;
	char buf[BUFFER_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE, argv[0]), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

	fd_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, perms);
	if (fd_to == -1)
		dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);

	do {
		rd = read(fd_from, buf, BUFFER_SIZE);
		if (rd == -1)
			dprintf(STDERR_FILENO, READ_ERR, argv[1]), exit(98);

		wrt = write(fd_to, buf, rd);
		if (wrt == -1)
			dprintf(STDERR_FILENO, WRITE_ERR, argv[2]), exit(99);
	} while (rd);

	cls1 = close(fd_from);
	cls2 = close(fd_to);
	if (cls1 == -1)
		dprintf(STDERR_FILENO, CLOSE_ERR, fd_from), exit(100);
	if (cls2 == -1)
		dprintf(STDERR_FILENO, CLOSE_ERR, fd_to), exit(100);

	exit(EXIT_SUCCESS);
}
