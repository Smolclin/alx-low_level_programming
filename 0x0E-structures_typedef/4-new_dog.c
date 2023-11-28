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
	size_t n, i, o;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
		if (dog == NULL)
		{
			free(dog);
			return (NULL);
		}
	for (n = 0; name[n] != '\0'; n++)
		;
	n++;
	dog->name = malloc(sizeof(char) * n);
	if (dog->name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < n; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (o = 0; owner[o] != '\0'; o++)
		;
	o++;
	dog->owner = malloc(sizeof(char) * o);
	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < o; i++)
		dog->owner[i] = owner[i];
	return (dog);
}
