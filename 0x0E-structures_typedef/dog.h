#ifndef DOG_H
#define DOG_H

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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dod *d);

#endif
