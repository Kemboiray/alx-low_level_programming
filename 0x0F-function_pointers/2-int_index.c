#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: pointer to array being parsed
 * @size: size of array
 * @cmp: pointer to function comparing values
 *
 * Return: index of first element that matches search.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
#if 0
	if (size <= 0)
		return (-1);
#endif
	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
