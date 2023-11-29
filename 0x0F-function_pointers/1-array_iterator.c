#include "function_pointers.h"

/**
 * array_iterator - function that executes a function
 * given as a parameter on each
 * @array: pointer to the array of integers
 * @size: size of the parameter
 * @action: pointer to the function
 * Return: always 0 (success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(*array);
		array++;
	}
}
