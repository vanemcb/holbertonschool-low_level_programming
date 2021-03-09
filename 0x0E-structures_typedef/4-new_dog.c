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
	char *name2, *owner2;

	other_dog = malloc(sizeof(dog_t));
	if (other_dog == NULL)
		return (NULL);

	name2 = _strdup(name);
	owner2 = _strdup(owner);

	other_dog->name = name2;
	other_dog->age = age;
	other_dog->owner = owner2;

	return (other_dog);
}

/**
 * _strdup - function that returns a pointer to a newly
 * allocated space in memory, which contains a copy of the
 * string given as a parameter
 * @str: input string
 * Return: pointer to a newly allocated space in memory
 */

char *_strdup(char *str)
{
	char *str2;
	int i = 0, x;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
		return (NULL);

	for (x = 0; x <= i; x++)
		str2[x] = str[x];

	return (str2);
}
