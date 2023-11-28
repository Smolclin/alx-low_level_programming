#ifndef DOG_H
#define DOG_H

/**
 * struct dog - function that creates dog
 * info
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the owner of the dog
 *
 * Description: my first alx struct
 *
 * dog_t - the new name for the dog struct
 */

typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
