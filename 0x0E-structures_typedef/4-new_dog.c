#include "dog.h"
#include <stdlib.h>
#include <string.h>

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
	char *name_dest, *owner_dest;

	if (name == NULL || age == 0 || owner == NULL)
		return (NULL);

	name_dest = malloc(strlen(name) + 1);
	if (name_dest == NULL)
	{
		free(name_dest);
		return (NULL);
	}

	owner_dest = malloc(strlen(owner) + 1);
	if (owner_dest == NULL)
	{
		free(owner_dest);
		return (NULL);
	}

	new = malloc(sizeof(dog_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	strcpy(name_dest, name);
	strcpy(owner_dest, owner);

	new->name = name_dest;
	new->age = age;
	new->owner = owner_dest;

	free(name_dest);
	free(owner_dest);
	return (new);
}
