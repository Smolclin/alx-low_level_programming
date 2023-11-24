#include "main.h"
#include <stdlib.h>

/**
 * _calloc - unction that allocates memory for
 * an array, using malloc
 * @nmemb: number of memory for the array to be allocated
 * @size: the size of array to be allocated
 * Return: memmory allocated for an array using malloc
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	size_t i;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		p[i] = 0;
	return (p);
}
