#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an ordered array of integers
 * @min: lowest valued element
 * @max: highest valued element
 *
 * Return: pointer to array (success), NULL (failure)
 */
int *array_range(int min, int max)
{
	int *p;
	int i, j;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0, j = min; i <= (max - min + 1); i++, j++)
		p[i] = j;
	return (p);
}
