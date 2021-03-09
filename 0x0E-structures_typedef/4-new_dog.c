#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 * Return: pointer
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *other_dog;

	other_dog = malloc(sizeof(dog_t));

	if (other_dog == NULL)
		return (NULL);

	other_dog->name = name;
	other_dog->age = age;
	other_dog->owner = owner;

	return (other_dog);
}
