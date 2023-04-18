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
	char *name_cop;
	char *owner_cop;
	size_t len1 = 0, len2 = 0, i;

	if (dog == NULL)
		return (NULL);

	for (i = 0; name[i]; i++)
		len1++;
	for (i = 0; owner[i]; i++)
		len2++;

	name_cop = malloc(sizeof(char *) * len1 + 1);
	owner_cop = malloc(sizeof(char *) * len2 + 1);

	if (name_cop == NULL || owner_cop == NULL)
	{
		free(dog);
		free(name_cop);
		free(owner_cop);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{
		name_cop[i] = name[i];
	}
	name_cop[len1] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	{
		owner_cop[i] = owner[i];
	}
	owner_cop[len2] = '\0';

	dog->name = name_cop;
	dog->age = age;
	dog->owner = owner_cop;
	return (dog);
}
