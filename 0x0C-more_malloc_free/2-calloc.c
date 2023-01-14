#include "main.h"
#include <stdlib.h>
#include "0-memset.c"

/**
 * _calloc - allocates memory for an array, using malloc, initialising
 * all of it with  0
 * @nmemb: array size of memory block to allocate
 * @size: size of individual array elements
 *
 * Return: pointer to allocated memory (success), or NULL (failure).
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	_memset(p, 0, nmemb);
	return (p);
}
