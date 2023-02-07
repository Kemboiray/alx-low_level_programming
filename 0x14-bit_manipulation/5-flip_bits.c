#include "main.h"
#include "2-get_bit.c"
/**
 * flip_bits -returns the number of bits you would need to flip to get from
 * one number to another.
 * @n: number.
 * @m: number.
 *
 * Return: see fn description.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp1 = n, tmp2 = m;
	unsigned int size_n, size_m, size, tmp_size, i, ret, *arr1, *arr2;

	size_n = bit_count(n);
	size_m = bit_count(m);

	size = size_n > size_m ? size_n : size_m;
	arr1 = malloc(size * sizeof(*arr1));
	if (arr1 == NULL)
		exit(EXIT_FAILURE);

	arr2 = malloc(size * sizeof(*arr2));
	if (arr2 == NULL)
		exit(EXIT_FAILURE);

	for (tmp_size = 0; tmp_size < size; tmp_size++)
	{
		arr1[tmp_size] = 0;
		arr2[tmp_size] = 0;
	}
	tmp_size = size;
	while (tmp_size > 0)
	{
		arr1[tmp_size - 1] = tmp1 & 1;
		arr2[tmp_size - 1] = tmp2 & 1;
		tmp1 >>= 1;
		tmp2 >>= 1;
		tmp_size--;
	}
	for (i = 0, ret = 0; i < size; i++)
		if (arr1[i] != arr2[i])
			ret += 1;
	free(arr1);
	free(arr2);
	return (ret);
}
