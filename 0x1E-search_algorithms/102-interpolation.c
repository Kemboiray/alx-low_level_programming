#include "search_algos.h"
#include <stdio.h>

/**
 * interpolation_search - search for a value in an array of integers
 * @array: pointer to the array
 * @size: length of the array
 * @value: integer being matched
 *
 * Return: index matching @value, or -2 if @array is NULL or no match is found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t mid, low = 0, high = size - 1;

	if (array == NULL || size == 0)
		return (-1);

	while (array[low] != array[high] && array[low] <= value && value <= array[high])
	{
		mid = low + (high - low) * (value - array[low]) / (array[high] - array[low]);
		printf("Value checked array[%lu] = [%d]\n", mid, array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (array[mid] > value)
			high = mid - 1;
		else
			return (mid);
	}

	if (array[low] == value)
	{
		printf("Value checked array[%lu] = [%d]\n", low, array[low]);
		return (low);
	}

	low += (high - low) * (value - array[low]) / (array[high] - array[low]);
	printf("Value checked array[%lu] is out of range\n", low);
	return (-1);
}
