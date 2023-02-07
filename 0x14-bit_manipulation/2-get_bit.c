#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @n: number.
 * @index: index.
 *
 * Return: the value of the bit at index index or -1 if an error occured.
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp1 = n;
	unsigned int size, tmp2, ret, *arr;

	size = bit_count(n);

	if (index >= size)
		return (-1);

	arr = malloc(size * sizeof(*arr));
	if (arr == NULL)
		return (-1);

	tmp2 = size;
	while (tmp2 > 0)
	{
		arr[tmp2 - 1] = tmp1 & 1;
		tmp1 >>= 1;
		tmp2--;
	}

	ret = arr[size - 1 - index];
	free(arr);
	return (ret);
}

/**
 * bit_count - count the number of bits in a number.
 * @n: number.
 *
 * Return: bit count.
*/
unsigned int bit_count(unsigned long int n)
{
	unsigned int size;

	if (n == 0 || n == 1)
		return (1);
	while (n > 0)
	{
		n >>= 1;
		size++;
	}
	return (size);
}
