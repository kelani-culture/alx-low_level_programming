#include "dog.h"
#include <stdlib.h>

/**
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

	size_t len1, len2, i;

	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		len1++;

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		dog->name[i] = name[i];


	for (i = 0; owner[i]; i++)
		len2++;

	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
		dog->owner[i] = owner[i];

	dog->age = age;
	return (dog);
}
