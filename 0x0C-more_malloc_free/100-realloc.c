#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates memory
 * using malloc and free
 * @ptr: the pointer to the old memory
 * @old_size: the size of memory previously
 * occupied
 * @new_size: the size of memory to be allocated
 * Return: the size of memory to be allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	size_t j, max = new_size;
	char *oldp = ptr;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		return (p);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	p = malloc(new_size);
	if (p == NULL)
		return (NULL);
	if (new_size > old_size)
		max = old_size;
	for (j = 0; j < max; j++)
		p[j] = oldp[j];
	free(ptr);
	return (p);
}
