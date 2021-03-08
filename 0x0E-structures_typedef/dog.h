#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog information
 * @name: pointer to dog's name'
 * @age: dog's name
 * @owner: pointer to dod's owner name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
