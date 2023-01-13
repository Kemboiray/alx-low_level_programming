#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @ac: argument count
 * @av: pointer to argument vector
 *
 * Return: 0 (success), 1 (one of the number contains non-digit symbols).
 */
int main(int ac, char **av)
{
	int i, j, sum = 0;

	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			if (!(isdigit(av[i][j])))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	while (--ac)
		sum += atoi(av[ac]);
	printf("%d\n", sum);
	return (0);
}
