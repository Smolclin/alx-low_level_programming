#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - function that initialize a
 * variablle of type struct dog
 * @d: pointer to the noun dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 * * Description: structure containing the dog info
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
