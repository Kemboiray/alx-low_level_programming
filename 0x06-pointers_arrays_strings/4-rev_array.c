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
	int i, j/*, k*/;
	int *b = a;

	for (i = 0; 2*i < n; i++)
	{
		j = i + 1;
		a[i] = a[n - j];
	}
	printf("i = %d, j = %d\n", i, j);
	for( ; i < n; i++)
	{
		j = i + 1;
		a[i] = b[n - j];
	}
	printf("i = %d, j = %d\n", i, j);
}
