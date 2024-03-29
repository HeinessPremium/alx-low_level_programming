#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the dogs.
 * @d: struct dog.
 *
 * Return: no return.
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(dog->name);
		free(dog->owner);
		free(d);
	}
}
