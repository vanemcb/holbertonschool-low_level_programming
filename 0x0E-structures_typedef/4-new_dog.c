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

	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	other_dog = malloc(len1 + len2 + sizeof(float));

	if (other_dog == NULL)
		return (NULL);

	other_dog->name = name;
	other_dog->age = age;
	other_dog->owner = owner;

	return (other_dog);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: string length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
		i++;
	return (i);
}
