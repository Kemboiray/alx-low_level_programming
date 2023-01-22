#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: pointer of type struct dog
 *
 * Return: void.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name != NULL && &(d->age) != NULL && d->owner != NULL)
			printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
		else if (d->name != NULL && &(d->age) == NULL && d->owner == NULL)
			printf("Name: %s\nAge: (nil)\nOwner: (nil)\n", d->name);
		else if (d->name == NULL && &(d->age) != NULL && d->owner == NULL)
			printf("Name: (nil)\nAge: %f\nOwner: (nil)\n", d->age);
		else if (d->name == NULL && &(d->age) == NULL && d->owner != NULL)
			printf("Name: (nil)\nAge: (nil)\nOwner: %s\n", d->owner);
		else if (d->name != NULL && &(d->age) != NULL && d->owner == NULL)
			printf("Name: %s\nAge: %f\nOwner: (nil)\n", d->name, d->age);
		else if (d->name != NULL && &(d->age) == NULL && d->owner != NULL)
			printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);
		else if (d->name == NULL && &(d->age) != NULL && d->owner != NULL)
			printf("Name: (nil)\nAge: %f\nOwner: %s\n", d->age, d->owner);
	}
}
