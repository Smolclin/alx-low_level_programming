#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - function that creates new dog
 * @name: pointer to the dogs name
 * @age: the age of the dog
 * @owner: the owner of the dog
 * Return: always 0 (success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nl, i, ol;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
		if (dog == NULL)
		{
			free(dog);
			return (NULL);
		}
	for (nl = 0; name[nl] != '\0'; nl++)
		;
	nl++;
	dog->name = malloc(sizeof(char) * nl);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nl; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ol = 0; owner[ol] != '\0'; ol++)
		;
	ol++;
	dog->owner = malloc(sizeof(char) * ol);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ol; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
