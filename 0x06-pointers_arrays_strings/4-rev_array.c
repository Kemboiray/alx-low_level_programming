#include "main.h"

/**
 * reverse_array - reverse order of elements in an array of integers
 * @a: array name
 * @n: array size
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = (n - 1), j = 0; i >= 0; i--, j++)
	{
		a[j] = a[i];
	}
}
