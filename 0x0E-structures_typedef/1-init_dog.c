#include "dog.h"

/**
* init_dog - initialize a variable of type struct dog
* @d: pointer to variable
* @name: pointer to name
* @age: float value of age
* @owner: pointer to string describing owner
* Return: void.
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
