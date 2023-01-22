#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - initializes a new dog_t variable
 * @name: pointer to dog name
 * @age: float value of age
 * @owner: pointer to dog owner name
 *
 * Return: pointer to dog_t (success), or NULL (failure).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
/*#if 0*/
	new->name = name;
	new->age = age;
	new->owner = owner;
/*#endif*/
	return (new);
}
