#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: the minimum array of integers
 * @max: the maximum array of integers
 * Return: an array of integers
 */

int *array_range(int min, int max)
{
	int i, k;
	int *y;

	if (min > max)
		return (NULL);
	k = max - min + 1;
	y = malloc(sizeof(int) * k);
	if (y == NULL)
		return (NULL);
	for (i = 0; i < k; i++)
	{
		y[i] = min;
		min++;
	}
	return (y);
}
