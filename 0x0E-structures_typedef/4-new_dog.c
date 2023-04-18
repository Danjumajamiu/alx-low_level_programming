#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - will create a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int np, op, x;
	dog_t *puppy;

	if (name == NULL || owner == NULL)
		return (NULL);
	puppy = malloc(sizeof(dog_t));
	if (puppy == NULL)
		return (NULL);
	for (np = 0; name[np]; np++)
		;
	np++;
	puppy->name = malloc(np * sizeof(char));
	if (puppy->name == NULL)
	{
		free(puppy);
		return (NULL);
	}
	for (x = 0; x < np; x++)
		puppy->name[x] = name[x];
	puppy->age = age;
	for (op = 0; owner[op]; op++)
		;
	op++;
	puppy->owner = malloc(op * sizeof(char));
	if (puppy->owner == NULL)
	{
		free(puppy->name);
		free(puppy);
		return (NULL);
	}
	for (x = 0; x < op; x++)
		puppy->owner[x] = owner[x];
	return (puppy);
}
