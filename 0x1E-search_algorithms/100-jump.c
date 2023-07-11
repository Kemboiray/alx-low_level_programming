#include "search_algos.h"
#include <math.h>

/**
 * linear_search - search for a value in an array of integers
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

/**
 * jump_search - search for a value in an array of integers
 * @array: pointer to array of integers
 * @size: size of @array
 * @value: value to search for
 *
 * Return: first matching index, or -1 (@array is NULL or match not found)
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, jump;

	if (array)
	{
		jump = (size_t)(round(sqrt(size)));

		for (i = 0; i < size; i += jump)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}

			if (array[i + 1] > value)
			{
				printf("Value found between indexes [%lu] and [%lu]\n", i - jump, i);
				return (linear_search(&array[i - jump], jump, value) + i - jump);
			}
		}
	}

	return (-1);
}
