#include "search_algos.h"

/**
 * linear_search - search for a value in an array of integer
 * @array: pointer to array of integers
 * @size: size of @array
 * @value: value to search for
 *
 * Return: first matching index, or -1 (@array is NULL or match not found)
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}

	return (-1);
}
