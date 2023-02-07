#include "main.h"

/**
 * print_binary - prints the binary representation of a number.
 * @n: number.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	int size = 0, tmp1 = n, tmp2, i, *arr;

	if (n == 0)
	{
		printf("%d", 0);
		return;
	}
	while (n > 0)
	{
		n >>= 1;
		size++;
	}
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		exit(EXIT_FAILURE);
	tmp2 = size;
	while (size > 0)
	{
		arr[size - 1] = tmp1 & 1;
		tmp1 >>= 1;
		size--;
	}
	for (i = 0; i < tmp2; i++)
		printf("%d", arr[i]);
	free(arr);
}
