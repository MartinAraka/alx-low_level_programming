#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * new_dog -  creates and initializes a dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 *
 * Return: pointer to new structure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}

	new_dog->name = strdup(name);
	new_dog->owner = strdup(owner);

	memcpy(&(new_dog->age), &age, sizeof(float));

	return (new_dog);
}
