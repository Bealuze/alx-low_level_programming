#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: struct dog.
 * if fails, returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int i, lenname, lenowner;

	doggy = malloc(sizeof(*doggy));
	if (doggy == NULL || !(name) || !(owner))
	{
		free(doggy);
		return (NULL);
	}

	for (lenname = 0; name[lenname]; lenname++)
		;

	for (lenowner = 0; owner[lenowner]; lenowner++)
		;

	doggy->name = malloc(lenname + 1);
	doggy->owner = malloc(lenowner + 1);

	if (!(doggy->name) || !(doggy->owner))
	{
		free(doggy->owner);
		free(doggy->name);
		free(doggy);
		return (NULL);
	}

	for (i = 0; i < lenname; i++)
		doggy->name[i] = name[i];
	doggy->name[i] = '\0';

	doggy->age = age;

	for (i = 0; i < lenowner; i++)
		doggy->owner[i] = owner[i];
	doggy->owner[i] = '\0';

	return (doggy);
}
