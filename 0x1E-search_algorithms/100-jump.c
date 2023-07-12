#include "search_algos.h"
#include <math.h>

/**
 * my_linear_search - search for a value in an array of integer
 * @array: pointer to array of integers
 * @size: size of @array
 * @value: value to search for
 * @offset: offset
 *
 * Return: first matching index, or -1 (@array is NULL or match not found)
 */
int my_linear_search(int *array, size_t size, int value, size_t offset)
{
	size_t i;

	if (array)
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i + offset, array[i]);
			if (array[i] == value)
				return (i + offset);
		}

	return (-1);
}

/**
 * jump_search - search for a value in an array of integers
 * @array: pointer to array of integers
 * @size: size of @array
 * @value: value to search for
 *
 * Return: first matching index, or -1 (@array is NULL or no match found)
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = 0, jump;

	if (array == NULL || size == 0)
		return (-1);
	jump = (size_t)floor(sqrt(size));

	while (step <= size - 1)
	{
		if (array[step] < value)
			printf("Value checked array[%lu] = [%d]\n", step, array[step]);
		if (step == 0 && array[step] > value)
			return (-1);

		if (array[step] >= value)
		{
			printf("Value found between indexes [%lu] and [%lu]\n",
					step - jump, step);
			return (my_linear_search(&array[step - jump], jump + 1,
						value, step - jump));
		}

		step += jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			step - jump, step);
	printf("Value checked array[%lu] = [%d]\n", step - jump, array[step - jump]);
	return (-1);
}
