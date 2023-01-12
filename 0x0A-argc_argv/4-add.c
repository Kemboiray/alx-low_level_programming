#include <stdio.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: pointer to argument vector
 *
 * Return: 0 (success), 1 (one of the number contains non-digit symbols).
 */
int main(int argc, char **argv)
{
	int sum = 0;

	if (argc > 1)
	{
		for (argc--)
		{
			if (atoi(*++argv) >= 0 && atoi(*++argv) < 10)
				sum += atoi(*++argv);
	printf("%d\n", sum);
	return (0);
}
