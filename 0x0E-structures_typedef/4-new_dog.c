#include "dog.h"
#include <stdlib.h>

/*
 * new_dog - a copy of name and owner
 *
 * @name: char
 * @age: float
 * @owner: char
 * Return: dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
