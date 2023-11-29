#include "function_pointers.h"

/**
 * int_index - function that searches for integer
 * @array: the array containing the integers
 * @size: size of the array
 * @cmp: pointer to the function to be used
 * Return: index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (0);
}
