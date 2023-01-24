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
		printf("Name: %s\nAge: %f\nOwner: %s\n",
					d->name ? d->name : "(nil)",
					&(d->age) ? d->age : "(nil)",
					d->owner ? d->owner : "(nil)");
	}
}
