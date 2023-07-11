#include "search_algos.h"

/**
 * print_array - print an array of integers
 * @array: pointer to array
 * @size: length of array
 *
 */
void print_array(int *array, size_t size)
{
	size_t i;

	for (i = 0; i < size - 1; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}

/**
 * binary_search - search for a value in a sorted array of integers using
 * the binary search algorithm
 * @array: pointer to array of integers
 * @size: length of the array
 * @value: value to search foe
 *
 * Return: matching index, or -1 (@array is NULL or no matches found)
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left = 0, right = size - 1, mid;

	if (array)
	{
		printf("Searching in array: ");
		print_array(&array[left], right - left + 1);

		while (left < right)
		{
			mid = (left + right) / 2;
			if (array[mid] == value)
				return (mid);
			if (array[mid] > value)
				right = mid - 1;
			else
				left = mid + 1;
			printf("Searching in array: ");
			print_array(&array[left], right - left + 1);
		}
	}

	return (-1);
}
