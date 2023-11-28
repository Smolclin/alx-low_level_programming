#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - function that frees dog
 * @d: pointer to the structures that
 * frees dog
 * Return: always 0 (success)
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
