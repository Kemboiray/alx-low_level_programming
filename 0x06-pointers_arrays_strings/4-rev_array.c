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
	int b[n];
	int i, j;

	for (i = n - 1, j = 0; i >= 0; i--, j++)
	{
		b[j] = a[i];
	}
	for (i = 0; i < n; i++)
		a[i] = b[i];
}
