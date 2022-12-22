#include "main.h"

/**
 * print_array - print n elements of an array
 * of integers, followed by a new line
 * @a: array of elements
 * @n: number of elements
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		if (n > 1)
		{
			for (i = 0; i < (n - 1); i++)
				printf("%d, ", a[i]);
		}
		printf("%d\n", a[n - 1]);
	}
}
