#include "search_algos.h"
#include <math.h>

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
	size_t prev = 0, root, step;

	if (array == NULL || size == 0)
		return (-1);
	root = (size_t)floor(sqrt(size));
	step = root;

	while (array[(step < size ? step : size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += root;
		if (prev >= size)
			return (-1);
	}
/*
*	printf("Value found between indexes [%lu] and [%lu]\n",
*			prev - root, step - root);
*/
	if (array[prev] <= value)
		printf("Value found between indexes [%lu] and [%lu]\n",
				(prev < prev - root ? prev : prev - root),
				prev < prev - root ? prev + root : prev);

	while (array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev++;
		if (prev == (step < size ? step : size))
			return (-1);
	}

	printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	if (array[prev] == value)
		return (prev);
	return (-1);
}
