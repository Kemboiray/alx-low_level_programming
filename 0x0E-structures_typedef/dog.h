#ifndef DOG_H
#define DOG_H
/*#define NULL ((void *)0)*/
#include <stdlib.h>

/**
* struct dog - contains variables describing a dog
* @name: pointer to name (string)
* @age: float value of age
* @owner: pointer to string identifying owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
