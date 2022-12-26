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
/*	int *b = a;

	for (k = 0; k < n; k++)
		b[k] = a[k];*/
	for (i = 0; 2*i < n; i++)
	{
		j = i + 1;
		a[i] = a[n - j];
	}
}
