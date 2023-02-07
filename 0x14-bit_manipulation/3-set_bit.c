#include "main.h"
#include "0-binary_to_uint.c"

/**
 * set_bit -  sets the value of a bit to 1 at a given index.
 * @n: pointer to number.
 * @index: index of bit.
 *
 * Return: 1 (success) or -1 (failure).
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	char *arr;
	unsigned int i, num;

	arr = malloc((index + 2) * sizeof(*arr));
	if (arr == NULL)
		return (-1);

	arr[0] = '1';
	for (i = 1; i < index + 1; i++)
		arr[i] = '0';
	arr[index + 1] = 0;

	num = binary_to_uint(arr);
	free(arr);
	*n |= num;

	return (1);
}
