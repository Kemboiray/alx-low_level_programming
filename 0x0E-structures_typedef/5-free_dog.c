#include "dog.h"

/**
 * free_dog - frees dog_t
 * @d: pointer to dog_t
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
		free(d);
}
