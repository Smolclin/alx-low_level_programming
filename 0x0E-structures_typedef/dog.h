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
 */

typedef struct dog

{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif
